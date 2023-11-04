include <SPI.h>
#include <SD.h>
#include <Wire.h>
#include "RTClib.h"
#include "Seeed_HM330X.h"
#include "DHT.h"
#include <SparkFun_u-blox_GNSS_Arduino_Library.h> //http://librarymanager/All#SparkFun_u-blox_GNSS

//Data logging system
//Sam Engel
//Last updated 14 March 2023

// how many milliseconds between grabbing data and logging it
#define LOG_INTERVAL  2000 // millis between entries
#define SYNC_INTERVAL 2000 // millis between calls to flush() - to write data to the card
uint32_t syncTime = 0; // time of last sync()

#define ECHO_TO_SERIAL   1 // echo data to serial port (for debugging)
#define WAIT_TO_START    0 // Wait for serial input in setup()

// DIGITAL OUTPUT PINS
#define heatingPadOut 3 //heating system
#define buzzerPin 4 //buzzer
#define cutPinOut 8 //cut down mechanism
#define speedSoundTrig 12 //Noah indiv. experiment 
#define redLEDpin 13 //for status updates - this is the built in LED in the corner
#define greenLEDpin 52 //for status updates

// DIGITAL INPUT PINS
#define speedSoundEcho 2 //Noah indiv. experiment
#define DHTPIN 11 //Derrick indiv. experiment

// ANALOG INPUT PINS
#define pressurePin 0 //analog pin for pressure readings
#define tempOutPin 1 //analog pin for outside temperature readings
#define tempInPin 2 //analog pin for inside temperature readings
//RTC uses analog 4 and 5
#define VIn1 8 //Parker & Edward indiv. experiments: solar panel voltage values
#define VIn2 9
#define VIn3 10
#define VIn4 11

// OTHER
const int chipSelect = 10; //for the data logging shield, digital pin 10 is the SD cs line

double speedSoundTargetDistance = 1.94155 * 1.0908; //inches from sensor to barrier
long millisAtWireCut = 0; //when the pressure drops below the threshold
bool wireCut = false; //has the wire been cut yet? Make sure it doesn't trigger twice

SFE_UBLOX_GNSS myGNSS; //define GPS unit
RTC_PCF8523 RTC; // define real time clock
HM330X PMsensor; //define PM sensor
#define DHTTYPE DHT22 //humidity sensor type
DHT dht(DHTPIN, DHTTYPE); //define humidity sensor

// the logging file
File logfile;

float v1, v2, v3, v4 = 0; //Parker & Edward indiv. experiments: solar panel voltages

//in case of error, the red LED turns on and the program stops
void error(char *str)
{
  Serial.print("error: ");
  Serial.println(str);
  
  // red LED indicates error
  digitalWrite(redLEDpin, HIGH);

  while(1); //stop program
}

//Following is PM sensor functions
u8 buf[30];
//parse the PM sensor output
u16 parse_result(u8 *data, int index)
{
   u16 value=0;
  if(NULL==data)
     return value;
   for(int i=0;i<8;i++)
   {     
     value = (u16)data[i*2]<<8|data[i*2+1];
     if (i == index) {
         return value;
     }
   }
   return value;
}
HM330XErrorCode parse_result_value(u8 *data)
{
//Ignore PM sensor errors. An error means it probably isn't wired correctly; hopefully it is.
return NO_ERROR;
}
//end PM sensor functions

//begin Setup
void setup(void)
{
  //begin Serial communications for debugging
  Serial.begin(9600);
  Serial.println();
  
  // debugging LEDs
  pinMode(redLEDpin, OUTPUT);
  pinMode(greenLEDpin, OUTPUT);

  //digital outputs
  pinMode(cutPinOut, OUTPUT);
  digitalWrite(cutPinOut, LOW); //make sure it does not go off
  pinMode(heatingPadOut, OUTPUT);
  pinMode(speedSoundTrig, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  //digital inputs
  pinMode(speedSoundEcho, INPUT);
  pinMode(DHTPIN, INPUT);
 #if WAIT_TO_START
  Serial.println("Type any character to start");
  while (!Serial.available());
 #endif //WAIT_TO_START

  // initialize the SD card
  Serial.print("Initializing SD card...");
  pinMode(chipSelect, OUTPUT);
  // see if the card is present and can be initialized:
  if (!SD.begin(chipSelect)) {
    error("Card failed, or not present");
  }
  Serial.println("card initialized.");
  
  // create a new file
  char filename[] = "LOGGER00.CSV";
  for (uint8_t i = 0; i < 100; i++) {
    filename[6] = i/10 + '0';
    filename[7] = i%10 + '0';
    if (!SD.exists(filename)) {
      // only open a new file if it doesn't exist
      logfile = SD.open(filename, FILE_WRITE); 
      break;
    }
  }
  if (! logfile) {
    error("couldn't create file");
  }
  Serial.print("Logging to: ");
  Serial.println(filename);

  // connect to RTC
  Wire.begin();  
  if (!RTC.begin()) {
    logfile.println("RTC failed");
   #if ECHO_TO_SERIAL
    Serial.println("RTC failed");
   #endif  //ECHO_TO_SERIAL
  }

//Set RTC time if necessary. Does not matter if correct - just needs to be precise relative to start of launch
  if (! RTC.initialized() || RTC.lostPower()) {
    Serial.println("RTC is not initialized, setting time");
    RTC.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
  
  //begin PM sensor
  if(PMsensor.init())
  {
    Serial.println("HM330X init failed");
  }
  
  //begin humidity sensor
  dht.begin();
  
  //begin GPS
  //myGNSS.enableDebugging(); //if needed for debugging
  if (myGNSS.begin() == false) //Connect to u-blox module using Wire port
  {
    Serial.println(F("u-blox GNSS not detected at default I2C address."));
  }
myGNSS.setI2COutput(COM_TYPE_UBX); //Set I2C port to output UBX only (turn off NMEA noise)
myGNSS.saveConfigSelective(VAL_CFG_SUBSEC_IOPORT); //Save (only) the communications port settings to flash and BBR

//assign column labels to the data
logfile.println("millis,stamp,P(kPa),T_inside(ohm),T_outside(ohm),latitude,longitude,altitude,siv,sound(mph),PM1.0,PM2.5,PM10,hum(%),V1,V2,V3,V4,vcc");    
#if ECHO_TO_SERIAL
Serial.println("millis,stamp,P(kPa),T_inside(ohm),T_outside(ohm),latitude,longitude,altitude,siv,sound(mph),PM1.0,PM2.5,PM10,hum(%),V1,V2,V3,V4,vcc");
#endif //ECHO_TO_SERIAL
}
//end Setup

//variables for use in loop
//used to take the running average of the last 10 pressures
const int numPressures = 10;
double lastPressures[numPressures];
int pressureCount = 0;

//begin Loop
void loop(void)
{
  // delay for the amount of time we want between readings
  delay((LOG_INTERVAL) - (millis() % LOG_INTERVAL));

  //green LED for debugging
  digitalWrite(greenLEDpin, HIGH);

  //turn buzzer on 2 out of every 10 seconds
  if (millis() % 10000 < LOG_INTERVAL) {
    digitalWrite(buzzerPin, LOW);
  }
  else {
    digitalWrite(buzzerPin, LOW);
  }
  
  // get and log milliseconds since starting program
  uint32_t m = millis();
  logfile.print(", ");    
  #if ECHO_TO_SERIAL
  Serial.print(m);
  Serial.print(", ");  
  #endif

  //get and log real time clock timestamp
  DateTime now = RTC.now();
  logfile.print(" \""+now.timestamp(DateTime::TIMESTAMP_FULL)+"\"");
  #if ECHO_TO_SERIAL
  Serial.print(" \""+now.timestamp(DateTime::TIMESTAMP_FULL)+"\"");
  #endif //ECHO_TO_SERIAL

  //get pressure reading
  analogRead(pressurePin); //basically "resets" the pin
  delay(10); 
  double pressureReading = analogRead(pressurePin);
  double pressure = 0.255*pressureReading - 27.5;
  
  //add current pressure to array of last ten pressures
  lastPressures[pressureCount] = pressure;
  pressureCount = (pressureCount + 1) % 10;
  
  //running average of the last ten pressures
  double avgPressure = 0;
  for (int i = 0;i<numPressures;i++) {
    avgPressure += lastPressures[i]/numPressures;
  }
//enable cutdown if avg. of last ten pressures is under threshold
double delayCutSeconds = 60 * 15; //wait 15 minutes once avg. pressure reaches threshold
if ((avgPressure <= 1.5 || millis() > 10800000) && wireCut == false) { //threshold of 1.5 kPa
Serial.print("WIRECUT TRIGGER - waiting "+String(delayCutSeconds)+" seconds");
logfile.print("WIRECUT TRIGGER - waiting "+String(delayCutSeconds)+" seconds");
    millisAtWireCut = millis();
    wireCut = true;
} else if (millisAtWireCut + 1000*delayCutSeconds < millis() && millisAtWireCut + 5000 + 1000*delayCutSeconds > millis() && millisAtWireCut != 0) {
    digitalWrite(cutPinOut, HIGH);
  } else {
    digitalWrite(cutPinOut, LOW);
  }

  //get temperature inside
  analogRead(tempInPin); //basically "resets" the pin
  delay(10);
  int tempInReading = analogRead(tempInPin);
//resistance calculation
  long tempInResistance = 10000.0/(tempInReading/1023.0) - 10000;
  //turn heating pads on if temperature is too low
if (tempInResistance > 31000) { //limit at ~0 degrees celsius
    digitalWrite(heatingPadOut, HIGH);
  } else {
    digitalWrite(heatingPadOut, LOW);
  }

  //get temperature outside
  analogRead(tempOutPin); //basically "resets" the pin
  delay(10);
  int tempOutReading = analogRead(tempOutPin);
//resistance calculation
  long tempOutResistance = 10000.0/(tempOutReading/1023.0) - 10000;

  //get GPS data
  long latitude = myGNSS.getLatitude(); //degrees * 10^-7
  long longitude = myGNSS.getLongitude(); //degrees * 10^-7
  long altitude = myGNSS.getAltitude();
  byte SIV = myGNSS.getSIV();
  
  //Speed of Sound (Noah individual experiment)
  digitalWrite(speedSoundTrig, LOW); //reset the ultrasonic sensor
  delayMicroseconds(2000);
  digitalWrite(speedSoundTrig, HIGH); //send a signal to the sensor
  delayMicroseconds(10);
digitalWrite(speedSoundTrig, LOW); //stop sending the signal, sensor will now send a signal back when it hears its sound bounce back
double pingTime = pulseIn(speedSoundEcho, HIGH); //time it takes for the sound to bounce off the barrier
double speedOfSound = speedSoundTargetDistance * 2.0 / pingTime * 1000000 * 3600 / 63360; //to mph
  //speed of sound should be 767.3 mph at sea level

  //PM2.5 Sensor (Sam individual experiment)
  if(PMsensor.read_sensor_value(buf,29))
  {
//read failed. Probably means the sensor is not properly wired - can print something here for debugging.
  }
parse_result_value(buf);
u16 PMsensorOutput[3] = {parse_result(buf,5), parse_result(buf,6), parse_result(buf,7)}; //{PM1.0, PM2.5, PM10}
  
  //Humidity Sensor (Derrick Individual Experiment)
  float humidity = dht.readHumidity();

  //Solar Panels (Parker & Edward Indiv. Experiments)
  v1 = analogRead(VIn1) * (5.0/1023.0); //calculate volts from analog input
  v2 = analogRead(VIn2) * (5.0/1023.0);
  v3 = analogRead(VIn3) * (5.0/1023.0);
  v4 = analogRead(VIn4) * (5.0/1023.0);
  
  //log all data
  logfile.print(", ");    
  logfile.print(pressure);
  logfile.print(", ");    
  logfile.print(tempInResistance);
  logfile.print(", ");    
  logfile.print(tempOutResistance);
  logfile.print(", "); 
  logfile.print(latitude);
  logfile.print(", ");    
  logfile.print(longitude);
  logfile.print(", ");    
  logfile.print(altitude);
  logfile.print(", ");    
  logfile.print(speedOfSound);
  logfile.print(", ");
  logfile.print(PMsensorOutput[0]);
  logfile.print(", ");
  logfile.print(PMsensorOutput[1]);
  logfile.print(", ");
  logfile.print(PMsensorOutput[2]);
  logfile.print(", ");
  logfile.print(humidity);
  logfile.print(", ");
  logfile.print(v1);
  logfile.print(", ");
  logfile.print(v2);
  logfile.print(", ");
  logfile.print(v3);
  logfile.print(", ");
  logfile.print(v4);
  logfile.println();
#if ECHO_TO_SERIAL
  Serial.print(", ");   
  Serial.print(pressure);
  Serial.print(", ");    
  Serial.print(tempInResistance);
  Serial.print(", ");  
  Serial.print(tempOutResistance);
  Serial.print(", ");    
  Serial.print(latitude);
  Serial.print(", ");    
  Serial.print(longitude);
  Serial.print(", ");    
  Serial.print(altitude);
  Serial.print(", ");    
  Serial.print(speedOfSound);
  Serial.print(", ");   
  Serial.print(PMsensorOutput[0]);
  Serial.print(", ");
  Serial.print(PMsensorOutput[1]);
  Serial.print(", ");  
  Serial.print(PMsensorOutput[2]);
  Serial.print(", "); 
  Serial.print(humidity);
  Serial.print(", ");
  Serial.print(v1);
  Serial.print(", "); 
  Serial.print(v2);
  Serial.print(", "); 
  Serial.print(v3);
  Serial.print(", "); 
  Serial.print(v4);
  Serial.println();
#endif //ECHO_TO_SERIAL

  digitalWrite(greenLEDpin, LOW);
  
  // blink LED to show that data is being synced to the card
  digitalWrite(redLEDpin, HIGH);
  logfile.flush();
  digitalWrite(redLEDpin, LOW);
}
//end Loop
