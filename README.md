# Space Balloon Launch
Since the dawn of time, humans have dreamed of reaching the stars. As a species, we have tried many, many times. Some have failed. Some have succeeded. This project aims to send a balloon and payload to the edge of space. The payload will record four primary measurements once every two seconds: pressure, inside temperature, outside temperature, and GPS data. Five individual measurements will be collected at the same rate: the speed of sound, humidity, solar panel efficiency for different wavelengths of light, and particle concentrations as a proxy for pollution. By using the pressure readings to approximate altitude, the measurements taken from other experiments can then be tracked relative to the ascent and descent of the payload. 

[SpaceBalloonLaunchPaper.pdf](https://github.com/babelnoah/Space-Balloon-Launch/files/13256264/Balloon.Project.Write-up.1.pdf)

## Introduction

The goal of this project is to send a balloon and payload into space to collect data. Unlike other projects (such as a rocket space launch), a high emphasis must be put on studying the atmosphere due to the balloon’s comparatively slow ascent. 
In preparation for the project, an exponential model for pressure was derived. This exponential model and a NASA empirical model are both critical for the project as the pressure predictions they provide allow the pressure measurements taken in the payload to then be used as a proxy for altitude. By having a way to relate the individual experiments’ data with altitude, it is then possible to overlay those results with the known layers in the atmosphere. By doing this, the results gained can then be used to gain a clearer picture on how certain facets of the atmosphere vary between sections. 

### The Atmosphere

As the protective layer of gasses that allow for the thriving independent systems on earth, the atmosphere can be split into several different layers: the troposphere, stratosphere, mesosphere, and thermosphere.

#### The Troposphere

The troposphere is the lowest layer of the Earth’s atmosphere, extending from the Earth’s surface to an average of 11 km above the Earth’s surface. Due to the troposphere being heated primarily by energy transferring through contact with the Earth’s surface, temperature decreases as altitude increases (from 288 K at sea level to 216 K at its uppermost edge). 

Compositionally, the troposphere is 78% nitrogen and 21% oxygen with the last 1% being argon, carbon dioxide and water vapor. Though less than 1%, the troposphere contains almost all of the water vapor in the atmosphere, leading to the troposphere being the stage in which almost all weather develops in—from clouds, to wind, to thunderstorms. Notably, 75% of the atmosphere’s mass lies below the tropopause, a boundary that marks the separation between the troposphere and the next layer, the stratosphere. 

#### The Stratosphere

The stratosphere, the most famous level of the atmosphere, extends from 11 to 50 km above sea level. Defined as the layer of atmosphere in which the temperature increases, the stratosphere is the home of the ozone (O3) layer. 

Ozone, as the molecule making up the ozone layer, has a crucial role in protecting the surface from certain ultraviolet wavelengths. It’s this absorption of certain ultraviolet wavelengths that heats up the air in the ozone layer, causing the stratosphere to increase in temperature as altitude increases—going from 216 K at its lowest to 271 K at its upper boundary: the stratopause. Crucially, although temperature increases with altitude, the pressure still decreases. At the border between the stratosphere and the mesosphere, the pressure has already decreased to 1/1000 the pressure at sea level. 

#### The Mesosphere

The mesosphere, the third highest layer of the atmosphere, extends from about 50 to 90 km above sea level. Here, because the ozone layer is so thin, the temperature, once again, begins to fall with altitude. By the time the mesopause has been reached, the temperature has plummeted to about 183 K. 

Because the mesosphere is too high for weather balloons and aircraft, but too low for spacecraft, the mesosphere is still one of the least understood parts of the atmosphere. However, one popular fact known about the mesosphere is that it is the layer in which meteors burn up, creating the phenomenon known as shooting stars. 

#### The Ionosphere

The ionosphere, though not a traditional “layer” of the atmosphere, extends from the top half of the mesosphere all the way to the exosphere. Much of the ionosphere also overlaps with another sphere known as the magnetosphere. The ionosphere is an electricity conducting layer that is home to the energetic particles (ions) coming from sunlight and outer space. 

Similar to the larger, traditional atmosphere, the Ionosphere is broken up into four layers: D, E, F1, and F2. Unlike the traditional atmosphere, changes in these layers happen constantly, with the D and E layer disappearing each night. Interestingly, because the lower portion of the D layer absorbs high-frequency radio waves, its disappearance at night allows AM radio stations to extend their range every night. 

The ionosphere’s ability to reflect particles from solar allows it to also create the two auroras known as the Northern and Southern lights 

#### Auroras 

There are two main auroras, Aurora Borealis near the north pole and Aurora Australis near the south pole. Though best seen at night, both are actually caused by the sun. Beyond light and heat, the sun actually sends a plethora of other small particles and energy towards Earth, this is known as solar wind. 
	
 Solar wind, however, is not constant. Solar storms are the umbrella term to describe the variations in solar wind. One type of solar storm, known as a coronal mass ejection, is where the sun expels a huge amount of charged gas that travels through space at high speeds. 
	
Luckily, the Earth’s magnetosphere (which houses the Earth’s protective magnetic field), diverts this gas away from a direct impact with the Earth. Because of the way magnet fields are oriented though, the gasses are then directed towards the north and south poles. 
This surge, however, disturbs the magnetosphere and alters the paths of many charged particles in the magnetosphere. The charged particles (mostly electrons and protons) then make their way into the thermosphere and exosphere where they ionize and excite the various elements that make up the atmosphere. 

It’s these ionized particles that are then responsible for the colorful displays that the auroras are known for. Oxygen emits green and red light while Nitrogen gleams blue and purple. 
In fact, the phenomenon of auroras have also been observed on other planets due to the fact that, like Earth, many other planets have an atmosphere and magnetic field. Provided below are pictures of auroras being observed on Jupiter and Saturn. 

<p align="center">
  <img width="323" alt="Screenshot 2023-11-04 at 2 47 40 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/d09b4a39-718b-4d0b-aa67-9134d65f4bd8">
  <br>
  <em>Image 1.7.1: A red aurora on the south pole of Saturn. Image courtesy of NASA/ESA/STScl/A. Schaller.</em>
</p>

<p align="center">
  <img width="400" alt="Screenshot 2023-11-04 at 2 50 31 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/3e8d32b9-cafb-43e8-9378-e7e71d4cd453">
  <br>
  <em>Image 1.7.2: A blue aurora on Jupiter captured using UV light. Image courtesy of the NASA Hubble Space Telescope.</em>
</p>

#### The Thermosphere

The thermosphere not only lies between the mesosphere and the exosphere, but also is where auroras occur. Home to the international space station and low earth orbit satellites, the thermosphere extends from the top of the mesosphere to about 800 km above sea level (though this ranges considerably because of solar activity). 

Unlike the mesosphere, temperature in the thermosphere climbs rapidly. Made up of only the lightest gases (mostly oxygen, helium, and hydrogen), it’s the oxygen (O2) molecules that absorb solar radiation at wavelengths below 200 nm that cause the rocketing temperature. Though reaching temperatures as high as 1,773 K, the thermosphere would remain ice-cold if a human was able to stand in it. Because a human’s temperature sense is based on total energy being transferred, the very high energy, but even lower density of molecules would trick the human body into thinking it is freezing. 

#### The Exosphere

The exosphere is both the outermost layer and the largest layer of the atmosphere. The exosphere’s area ranges massively, contracting to 1,000 km above earth during solar storms to extending all the way to 10,000 km when it’s calm. Composed of mostly hydrogen, trace amounts of other light gasses remain present in the exosphere; even then, the exosphere’s density is extremely low. 
It’s because of its extremely low density that makes any weather not possible in the exosphere. The only meteorological phenomena that do extend into the exosphere are the auroras on rare occasions, yet they remain mostly in the thermosphere. However, the exosphere is home to the majority of human satellites orbiting earth. 

###  Climate Change

With context on the atmosphere and its composition, discussion can then be had on the importance of understanding the atmosphere as it is naturally and the impact of human activities onto it. To summarize succinctly, the volume of certain gasses in the atmosphere is critical in allowing radiation to escape. Due to human industrialization, however, these gasses have only increased in the atmosphere, making temperatures climb. The climbing temperatures are then responsible for a plethora of disasters such as changing seasons, ocean acidification, mass extinction, and more. 

#### Greenhouse Gasses

Though innocuous, one of the root causes behind the rising temperatures comes from greenhouse gasses such as carbon dioxide, methane, and nitrous oxide found in lower layers of the atmosphere. To understand the impact these gases have, the difference between incoming and outgoing radiation must first be explained. 

Much of the higher energy radiation from the sun, as explained before, doesn’t actually reach the surface of the Earth. However, the Earth itself will also emit radiation, though at much lower wavelengths. 

It is due to this difference between incoming and outgoing radiation that makes the greenhouse gasses so problematic. Some papers describe greenhouse gasses as a one way filter, as they do not affect the radiation coming in due to their high energy, yet prevent the Earth’s emitted radiation from leaving. 

Overall, this leads to a net gain in energy within the atmosphere, raising the temperature experienced on the surface by a few fractions of a degree each year. 

#### Positive Feedback Loops

In the scheme of climate change, a fraction of a degree might not seem like a lot; yet the positive feedback loops—such as forest greening and browning, ice albedo, clouds, and water vapor—it feeds into make the impacts of climate change much more serious and harder to stop. 

Take clouds, which reflect one third of the sunlight that hits Earth’s atmosphere. Slight changes in cloud location, type, and amount could lead to drastic changes on the surface. As an area of going research, scientists are trying to learn more about how changes help slow down climate change or hurt and lead to faster global warming. 
	
Beyond clouds, water vapor as a whole is an important feedback mechanism to the greenhouse effect. As the most abundant greenhouse gas, its increase as temperature increases creates a snowball effect. 

This balloon launch project can further aid in the learning of how these various systems in nature impact the larger effects that climate change movements and activists warn the general public about. 

### Conclusions

Overall, the value and beauty of the atmosphere cannot be understated, and it’s our actions and the climate change that results from them that might irreversibly damage our world. This damage not only would cause immense loss of life, both in natural ecosystems and in human cities, but also could cause the disappearance of the wonders of the natural world, permanently. This project aims to provide measurements that can aid in the continual learning about the world and the environment it houses. 

## EXPERIMENTS CONDUCTED

With the importance of the atmosphere, it’s clear that one balloon launch cannot give a comprehensive picture of the atmosphere. However, in the payload are five separate individual experiments that aim to discover more about several smaller facets present within the atmosphere. To support these experiments are also four other main measurements. 

### Pressure

A Vernier Gas Pressure Sensor is used to convert the absolute pressure of the atmosphere into a signal from 0 V to 5 V, which is then interpreted by the Arduino. Based on the calibration of the sensor, the Arduino linearly translates this voltage into a pressure reading in kPa.
	
The pressure sensor works by allowing the outside air to press against a sheet. On the other side of the sheet is a fixed amount of gas as a reference. When the outside pressure increases, the sheet deforms or moves into the reference, and when the pressure decreases, the sheet tends the other way. The pressure on both sides of the sheet will be the same at equilibrium; therefore, by measuring the amount, temperature, and volume of the reference gas, its pressure can be calculated with PV=nRT. The absolute pressure of the outside air will match this reference pressure.

Measuring the pressure is crucial as it is the main proxy for the altitude of the payload. This is because unlike temperature, pressure only decreases, making it much more accurate to estimate altitude. With the ability to know the altitude at any given moment, all other measurements can be compared to the altitude at which they were measured.

As the payload rises, the pressure should decrease as there is less atmosphere above the payload to press down on the air around it.

### Temperature Inside and Outside

Temperature is measured with two 10k ohm thermistors: one on the outside of the payload and one on the inside. The NTC thermistors used are often made of powdered metal oxides, which increase in resistance when the temperature drops, and vice versa. The Arduino can measure the resistance of the thermistor (see Electrical and Software Design). This resistance is then converted to temperature using the 10k ohm thermistor equation found on the internet (see Sensor Calibration). 

Temperature is crucial to measure because many other experiments and the NASA pressure model are dependent on temperature. For example, the speed of sound in air and solar panel efficiency might vary based on the temperature.

The inside temperature is taken as well to prevent freezing or overheating of electrical components. When the internal temperature passes below a certain threshold, the heating pads in the box turn on, warming up the components and sustaining the sensors.

At first, as the altitude increases, the temperature should decrease by PV=nRT, because pressure is decreasing. However, this might reverse at some point as the payload gets closer to the sun.

### GPS

The location of the payload is tracked using a Sparkfun GPS chip connected to the Arduino. The receiver chip triangulates the Arduino’s position by measuring the amount of time it takes to receive a signal from multiple GPS satellites and interpolating these into coordinates and an altitude (see Tracking – GPS).

The GPS data is crucial in order to see after the launch where the balloon went exactly. This path can be compared to the predicted path of the balloon; also, it gives more information to compare the other experiments to. For example, the temperature might be lower or higher than expected at a certain altitude because of its geographical location.

Finally, the GPS altitude is important to compare to the calculated altitude (from the pressure data). It is not perfectly accurate (see Sensor Calibration), but it is close enough to double-check that the calculated altitude is reasonable.

### Speed of Sound (Noah)

Understanding the speed of sound as a function of altitude is an important factor in the field of acoustics due to its implications for the design of communication systems, weather forecasting, and atmospheric modeling. Furthermore, since the speed of sound depends on the thermo-physical properties of the flowing media, it opens the possibility to use the speed of sound in determining other parameters of interest.The prevailing hypothesis posits a decrease in air density with increasing altitude leads to a reduction in the speed of sound. This hypothesis is grounded in the ideal gas law, which predicts a decrease in gas density as altitude increases. 

To evaluate this theory this experiment employed the time-of-flight (TOF) principle, in which an ultrasound signal is emitted by a transmitter and detected by a receiver after reflecting off a boundary in the medium. The time taken for the signal to travel from the transmitter to the receiver can be used to determine the speed of sound in the medium, based on the known distance between the transmitter and receiver. Unlike other sound sensors that use microphones and amplifiers to convert sound waves into electrical signals, ultrasound sensors generate and detect high-frequency sound waves, which are less susceptible to interference from background noise. 

In the set-up, a 40-kilohertz ultrasonic-sensor module was used. It had two transducers (pulse generator and echo detector). An ATmega328p microcontroller with an internal clock of 8MHz was used for the TOF estimation, without a prescaler this equates to 125ns of resolution, which is accurate enough for our experiment. As an obstacle, a 2.4 in x 1.6 in plate was used as a reference measurement which was established by a ruler. The ultrasonic sensor was placed approximately 2 in away from the plate and then calibrated (see Sensor Calibration).

<p align="center">
  <img width="467" alt="Screenshot 2023-11-04 at 2 54 54 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/345b3ee9-a7d2-496f-8db8-6e86dbbae99d">
  <br>
  <em>Figure 2.4.1: Speed of Sound Experiment Setup.</em>
</p>

The ultrasonic sensor signal operates in the following way: First, the arduino sends a 10 microsecond 5V pulse to the IO trigger pin (minimum time to trigger input to start the ranging). This low-high-low sequence creates a high frequency ultrasonic tone (called a “ping”) that bounces from the trigger module, off the plate, and back into the echo sensor. After each cycle, there is a delay of 2 milliseconds to prevent the trigger/echo signal interference. The following diagram shows the timing of a single threshold detection using the TOF method.

```bash

define speedSoundTrig 12 //Sensor Trip pin connected to Arduino pin 12
define speedSoundEcho 2 //Sensor Trip pin connected to Arduino pin 2
double speedSoundTargetDistance = 1.94155 * 1.0908; //inches from sensor to barrier

void setup(void)
{
Serial.begin(9600);
pinMode(speedSoundTrig, OUTPUT);
pinMode(speedSoundEcho, INPUT);
}

void loop(void)
{
digitalWrite(speedSoundTrig, LOW); //reset the ultrasonic sensor
delayMicroseconds(2000); //Let signal settle
digitalWrite(speedSoundTrig, HIGH); //send a signal to the sensor
delayMicroseconds(10); //Delay in high state
digitalWrite(speedSoundTrig, LOW); //Ping sent
double pingTime = pulseIn(speedSoundEcho, HIGH); //ping time in microseconds
speedOfSound = speedSoundTargetDistance * 2.0 / pingTime * 1000000 * 3600 / 63360; //convert to mph
}
  
```
<em>Figure 2.4.2: Speed of Sound Mechanism Code</em>

<p align="center">
  <img width="361" alt="Screenshot 2023-11-04 at 2 58 24 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/ea522caf-8c50-43fb-9f70-6fa2d2e1635d">
  <br>
  <em>Image 2.4.3: Signal fluctuation of TOF components measured in threshold method.</em>
</p>

<p align="center">
  <img width="383" alt="Screenshot 2023-11-04 at 2 58 58 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/39dc3d66-b7de-49e0-a2da-3e749c1afb24">
  <br>
  <em>Image 2.4.4: Ultrasonic sensor diagram</em>
</p>

By using the known distance within the TOF measurement, the speed of sound (in mph) can be calculated:

Speed of sound = (2''*2/Ping time) * (10^6 microseconds/second) * (3600 seconds/hour) * (1 mile/63360 inches)

### Humidity (Derrick)

The humidity sensor used is the DHT22, a capacitive humidity sensor. Capacitive humidity sensors measure the relative humidity with a thin strip of metal oxide placed between two conductive plates. As relative humidity changes, the dielectric constant of metal oxide changes, causing the capacitance of the system to change, which changes the voltage across the conductive plates (Figure 2.5.1). The relative voltage change is then interpreted into humidities.

<p align="center">
  <img width="345" alt="Screenshot 2023-11-04 at 3 03 24 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/2f51b538-68e5-4224-80f0-538f158e912a">
  <br>
  <em>Figure 2.5.1 - The dielectric–metal oxide—placed between two conductive plates.</em>
</p>

Tracking the humidity as the balloon rises allows us to detect the level of clouds in the atmosphere. Humidity changes also have an effect on forms of life, so tracking humidities at different altitudes can play a part in understanding how high altitudes will affect living things. Also, other experiments such as the speed of sound might depend on the humidity.

When initially leaving the ground, the humidity should decrease gradually. As the balloon reaches cloud level, the humidity should spike due to the large amount of moisture in clouds, then gradually decrease to nearly zero percent as the balloon approaches space. 	

### Solar Cell Efficiency (Parker)

It is hypothesized that the efficiency of solar cells increases with altitude. To test this, our payload carries a 5-volt solar cell (suspended on a horizontal rod to avoid the balloon’s shadow) wired in parallel with a 2k ohm resistor (to create a current load) and an analog pin from the main Arduino to read in the voltage (see figure 2.6.1). The readings occur once every two seconds, and the equation below is used to find the voltage: 

Voltage = (sensor value) * 5.0 / 1023.0

The 5.0 represents the maximum amount of voltage that can be produced by the solar cell. And 1023.0 represents the maximum reading from the sensor. To confirm that the readings were being measured correctly, the solar cell was placed in the sun, and the voltage reading that went to the Arduino matched that of the multimeter (4.1 volts - connected to the ground and analog read pins of the Arduino).  

It’s because the 2k ohm resistor read 4.1 volts under the sun that made it the optimal choice for the solar cells. This way, the solar cells could have the change in voltage necessary for the Arduino’s sensitivity to pick up the changes found in the experiments. 

<p align="center">
  <img width="416" alt="Screenshot 2023-11-04 at 3 04 34 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/eeab8110-7fca-45a0-adac-8199d24704f5">
  <br>
  <em>Figure 2.6.1: Solar Cell Circuit.</em>
</p>

### Wavelengths of Light (Edward)

Known as the eye killer and the villain behind anything with a screen, blue light’s harmful effects are known so well that huge manufacturers now have advertising campaigns for their blue light glasses. Yet, blue light is a naturally occurring light, one that’s dispersed though in the upper atmosphere making the sky seem blue.

This experiment’s goal is to see how present different wavelengths of light are as altitude increases and determine which part of the atmosphere is responsible for dispersing all the blue light, and at what rate. The results of this experiment can reveal how little blue light humans are exposed to normally and how much the advent of the digital age has exposed people to this harmful light. 

In an effort to conserve space and weight, this intensity of light colors experiment is using the same solar cells as another experiment. Because of this, the wavelength of light experiment uses the same circuit as the experiment explained above connected four times in parallel (explanation in previous section was co-written for conciseness in organization). The experiment uses four solar cells, there is one solar cell with a green filter, one with a red filter, one with a blue filter, and one with no filter at all to act as a negative control (see Solar Cell Efficiency). 

The use of filtered solar cells provides an easy proxy to determine the intensity of light, as more voltage generated by the solar cell would equate to more intense light. On the other hand, the different colored filters allow for more comprehensive results for the blue filtered solar cell to be compared against. 

It’s expected that the intensity of each color of light will never catch up with the negative control (a solar cell with no filter); however, all colors intensity should increase as altitude increasing, with blue seeing a stark increase at a certain altitude before mellowing out and increasing at a rate comparable with the other colors.

### Particle Concentrations (Sam)

The particle concentrations of PM2.5, PM5, and PM10 are tracked using a Grove Laser PM2.5 Sensor. PM10 refers to particles that are smaller than 10 micrometers across, PM5 refers to particles smaller than 5 micrometers, and PM2.5 to 2.5 micrometers. The sensor works by shining a laser through the air; when the laser hits small particles, it scatters in different directions and this scattered light is picked up by a photometer. The higher the particle concentration, the more light will be scattered and hit the photometer. Therefore, by analyzing the photometer readings, the particle concentration can be inferred.

These particle concentrations act as a proxy for pollution levels. This is important because breathing in air with over 12 microgram/m^3 PM2.5 can be hazardous to human health. If there is a wildfire nearby, the levels of all three particle sizes go up, which is why it is often recommended during wildfire season to wear an N95 mask. This experiment is meant to discover if there is more or less pollution as the balloon rises into the atmosphere.

As the balloon rises, the particle levels should go down because the atmosphere is thinning. However, it will be interesting to see if there are any altitudes with higher than expected levels and which size of particle is the most common.

## PHYSICAL DESIGN

Although it is easy to let a balloon go as a child and watch it float away, each creation in the project had to be carefully thought out in order for more than a one time goodbye to be possible. 

### Payload

The creation of the payload needed special attention as it was critical to ensure the payload survived the journey and could be recovered.  

The overall mindset behind the design of the payload can be summed up in one word: efficiency. The thinking behind each decision made was to save space and save mass. In the abstract, before any work was done, two things were found, the total buoyancy force and the exponential model for pressure vs altitude. 

#### Buoyancy Force

Buoyancy was the first thing calculated as it would then determine the mass that the project’s payload would strive to be around. 

<p align="center">
  <img width="583" alt="Screenshot 2023-11-04 at 3 07 26 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/28bf9961-14d4-4471-a9c3-92eedd856e33">
  <br>
  <em>Image 3.1.1: Derivation of total buoyancy force and then total mass able to be lifted.</em>
</p>

With the calculation of buoyancy force, it was determined that in total the project would have to be around 1.928 kg. However, because of the balloon’s mass itself, the true mass available for the payload would be around one kilogram. 

#### Pressure vs Altitude Exponential Model

Following the derivation of buoyancy force, the exponential model was derived for pressure vs altitude. 

<p align="center">
  <img width="439" alt="Screenshot 2023-11-04 at 3 08 17 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/13cbdeda-9f0e-4e60-b13c-72f2634ad9d2">
  <br>
  <em>Image 3.1.2: Derivation of the Pressure vs Altitude exponential model.</em>
</p>

Deriving the pressure vs altitude model early was crucial in allowing the project to move forward smoothly. It was through this model that the pressure sensor and cut-down mechanism could be calibrated. However, unlike the nasa model which lies close to the actual pressure throughout ascent, the derived exponential model breaks down at higher altitudes due to the assumptions it makes in the deriving process. The largest and most salient of these being the assumption that temperature remains at a constant 293.15 K no matter the altitude. 

#### Payload Assembly and Design Reasoning

Once the foundation was set, the payload could then begin to be designed. First, a smaller, streamlined, styrofoam box was chosen to conserve mass while providing a solid shell for protection. Once a box was chosen, 16 small holes were melted into the sides with wire—four on each side. A zip tie was then passed through each pair of holes at each corner for a total of 8 zip ties. 

<p align="center">
  <img width="557" alt="Screenshot 2023-11-04 at 3 09 13 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/6172d1b0-eaf7-4ff3-9a46-bb0b07cf0fdd">
  <br>
  <em>Image 3.1.3: Payload box with all modifications.</em>
</p>

<p align="center">
  <img width="486" alt="Screenshot 2023-11-04 at 3 09 45 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/228470c7-0bc4-49cb-8724-e6e5b0b9ef55">
  <br>
  <em>Image 3.1.4: Payload holes with zip ties passed through.</em>
</p>

From each zip tie, a string was then tied to the parachute. Although seemingly overboard, this was chosen because not only do the strings weigh a negligible amount, the redundancy provided is critical in ensuring that the payload does not plummet out of the sky. 

As can be seen from the CAD drawing, other holes were also cut into the box to the various sensors and projects packed into the payload.  

Next was the choice to put in reflective foil. 

<p align="center">
  <img width="567" alt="Screenshot 2023-11-04 at 3 10 31 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/fbf64733-1696-4489-a029-60a0f4485078">
  <br>
  <em>Images 3.1.5 and 3.1.6: Payload box and lid with reflective foil</em>
</p>

By putting one in the top and bottom of the payload, heat could then be insulated better, keeping the payload’s sensors and electronics working at a more optimal temperature. Seeing that the two types of foil had comparable masses, a thicker one was chosen for its higher insulating capabilities instead of the normal, only reflecting foil. 

A section was cut out of the foil that lines the bottom of the box’s inside and a hole punctured to the outside to accommodate for the speed of sound individual experiment. Doing this allowed for temperature and pressure to easily permeate its way into the isolated box prepared for the experiment. 

With a foil lining in place, the first item placed in the box was the camera.

<p align="center">
  <img width="621" alt="Screenshot 2023-11-04 at 3 11 30 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/b814b1cc-b7c0-4d63-a652-fcc4d1c1bfdf">
  <br>
  <em>Images 3.1.7 and 3.1.8: CAD Pictures of camera holder inside and outside of payload box.</em>
</p>

<p align="center">
  <img width="610" alt="Screenshot 2023-11-04 at 3 12 02 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/d5ff8110-91a4-4815-8cb4-0d50763574be">
  <br>
  <em>Image 3.1.9: Camera placed in box showing field of view.</em>
</p>

<p align="center">
  <img width="619" alt="Screenshot 2023-11-04 at 3 12 11 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/35dba50b-1f82-46b5-8a32-6404fe2b5747">
  <br>
  <em>Image 3.1.10: Outside hole of payload box with camera inserted (camera lens visible).</em>
</p>

Though innocuous, the camera’s hole and subsequent foam covering was carefully planned. An elliptical hole was chosen to accommodate the full breadth of the camera’s lens. However, the hole was carefully cut to ensure that a minimal amount of outside air would then flow around the camera and into the payload. 

A styrofoam backing was then chosen to cover the camera for three different reasons: warmth, insulation, and support. 

<p align="center">
  <img width="618" alt="Screenshot 2023-11-04 at 3 13 15 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/c7313431-f4b1-48d0-98a7-245cfcfca039">
  <br>
  <em>Image 3.1.11: Styrofoam backing covering camera.</em>
</p>

Because the camera is exposed to the elements, a styrofoam covering was used to block out the air that would make it into the payload through the small cracks between the camera and styrofoam walls. The styrofoam covering was also chosen because it would allow for heat to be transferred through it to ensure that the camera could remain warm throughout the journey. 

Lastly, because the camera was positioned in a downward facing angle, the foam backing was used to support it firmly and ensure that it wasn’t jostled out of position as the payload ascended through the winds of the atmosphere. 

With the camera and reflective foil in place, heating pads and a center cardboard brace piece was added to warm the box and help organize the box, respectively.

<p align="center">
  <img width="484" alt="Screenshot 2023-11-04 at 3 13 49 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/4c4d4fa3-af27-45b8-ba6a-9c0f422202e9">
  <br>
  <em>Image 3.1.12: Heating pads and cardboard brace inserted into the payload.</em>
</p>

<p align="center">
  <img width="325" alt="Screenshot 2023-11-04 at 3 14 37 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/06640281-6f71-416d-a876-cb41ad84a0fe">
  <br>
  <em>Image 3.1.13: CAD rendering of the cardboard divider inserted into the payload.</em>
</p>

The heating pads are crucial as they allow for the components in the payload to stay warm and in a functional operating environment during the journey. The placement of each heating pad was careful to maximize their benefits. 

One heating pad was wedged between the cardboard divider and the foam covering the camera to heat components on both sides of the divider while also transferring heat through the foam to warm up the camera. 

The other heating pad was placed in a more open area on one side of the divider to allow for the heating of the main components inserted later. 

On its own, the cardboard divider does not do much; however, it is crucial in keeping the sensors secure in their positions. However, its width is purposely a little over 21 cm to ensure that it slides extremely snugly into the styrofoam box. 

On one side of the cardboard divider is where the Foxhunt Transmitter and the PicoAPRS are stored. 

<p align="center">
  <img width="486" alt="Screenshot 2023-11-04 at 3 15 20 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/8548de90-0073-446a-aeec-7904647ddad4">
  <br>
  <em>Image 3.1.14: Tracking devices packed snugly into the side of the payload.</em>
</p>

Both the Foxhunt Transmitter and the PicoAPRS are critical to the project’s success as these two combined allow for the tracking and recovery of the payload. Both were placed on top of each other and on the side due to their longer and thinner shapes. By sliding the two towards one side, more space could be left over on their side of the cardboard divider for the placement of other sensors. 

Then, another small hole was drilled into the side of the box.

<p align="center">
 <img width="336" alt="Screenshot 2023-11-04 at 3 15 59 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/7fc49fc2-ae26-4285-b7d5-e4b581944d31">
  <br>
  <em>Image 3.1.15: Hole punctured where both tracking antenna protrude from.</em>
</p>

<p align="center">
  <img width="397" alt="Screenshot 2023-11-04 at 3 16 28 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/8db6be4d-e5ae-4894-8812-e22be37e5ab6">
  <br>
  <em>Image 3.1.16: CAD rendering of tracking antenna and protrusion hole.</em>
</p>

Though innocuous, this hole provides an outlet for the antenna on the two tracking devices. By sticking them out, they are free to transmit while also, critically, not jostled around in the box as much, reducing the risk of any antenna being damaged. This risk reduction is crucial as (mentioned before) these two tracking devices are the only way for the payload to be recovered. 

With the auxiliary equipment nested into the payload, the main electrical boards could then be inserted with all their respective sensors. 

Before insertion, the main boards had to be organized in a way to conserve space.

<p align="center">
  <img width="612" alt="Screenshot 2023-11-04 at 3 17 29 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/2db4b5ff-6161-405e-80b2-e1d6325f014f">
  <br>
  <em>Images 3.1.17 and 3.1.18 : Main electrical boards stacked for packing into payload.</em>
</p>

Once stacked, most boards could then be packed in a way that it held in place against three walls, two from the styrofoam box and the cardboard divider. By being held in place, the integrity of the electrical circuits and sensors can be bolstered in preparation for the jostling experienced during the ascent and descent. 

During stacking, many careful considerations were taken. The speed of sound experiment was kept at the bottom to allow it access to the hole in the bottom of the payload. The board containing the two capacitors for the cut down mechanism is kept at the top to ensure that its wires had easy access to the third hole at the top edge of the payload, this way the cut down mechanism could function just outside the payload, protecting its contents from the immense heat and current. 

On the other hand, during creation of the main electrical boards, the outside temperature sensor was made with extra long wire to ensure that it could be positioned outside of the payload through a different hole no matter the position of its board. 

Lastly, the pressure sensor and its outlet was purposely oriented to allow the pressure sensor’s wire to pass through the middle cardboard divider’s hole and connect to the sensor on the other side of the divider. 

Stacked, the boards were then inserted into the payload, following that, the sensors were attached and the batteries were attached last.

<p align="center">
  <img width="619" alt="Screenshot 2023-11-04 at 3 18 24 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/76470e42-1eb3-4ff2-884e-6c72e7a4edfd">
  <br>
  <em>Image 3.1.19: Payload packed fully with all components in place.</em>
</p>

<p align="center">
  <img width="322" alt="Screenshot 2023-11-04 at 3 18 46 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/ab5fa60f-deee-4e7a-8cf5-6cf876a37b38">
  <br>
  <em>Image 3.1.20: One angle of CAD rendering depicting the payload contents and configuration.</em>
</p>

<p align="center">
  <img width="571" alt="Screenshot 2023-11-04 at 3 19 34 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/f200b0c4-40ec-417b-9143-3438f8a17be7">
  <br>
  <em>Image 3.1.21: Another angle of CAD rendering depicting the payload contents and configuration.</em>
</p>

Due to the fact that batteries needed to be easily changeable for them to be charged, the layout purposely left them easily accessible when the payload’s lid was removed. 

As can be seen from image 3.1.19, even after all the components were added to the payload, there was still extra empty space to serve as a resting place for the batteries and as wiggle room to account for the slight variations in wire and board orientations each time the payload was packed. 

Once packed the last component was added to the payload box, the combined individual experiments that measure light intensity. 

<p align="center">
  <img width="610" alt="Screenshot 2023-11-04 at 3 20 15 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/378dd46c-d407-4ca8-aa83-b6248a800584">
  <br>
  <em>Image 3.1.22: Combined individual experiments added to payload.</em>
</p>

Because it was known that the payload would be hanging below a large balloon, a longer, extremely light stick was used to hold the solar cells being used. This way, the solar cells would be undisturbed by the payload and balloon as much as possible. 

Overall, the final mass of the box came out to be 1054.01 grams

Listed below are the individual masses of each component within the box itself. 

<p align="center">
  <img width="641" alt="Screenshot 2023-11-04 at 3 21 02 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/bae4a57d-c614-4402-a8fb-faf8be5b31a7">
  <br>
  <em>Table 3.1.1: Masses of Payload Components.</em>
</p>

#### Payload Assembly Image Walkthrough

Provided below are CAD renderings modeling the assembly of the payload step by step. 

<p align="center">
  <img width="386" alt="Screenshot 2023-11-04 at 3 22 07 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/a954f819-c1ea-4594-a3cf-5acfef86a258">
  <br>
  <em>Image 3.1.23: Prepared payload box.</em>
</p>

<p align="center">
  <img width="381" alt="Screenshot 2023-11-04 at 3 22 35 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/8ecb7695-75e9-4854-85a2-e4ccc41c2c7f">
  <br>
  <em>Image 3.1.24: Camera insertion.</em>
</p>

<p align="center">
  <img width="381" alt="Screenshot 2023-11-04 at 3 23 07 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/44d83280-bf50-4ac4-aafc-940bb1fcc50b">
  <br>
  <em>Image 3.1.25: Central cardboard divider insertion.</em>
</p>

<p align="center">
  <img width="378" alt="Screenshot 2023-11-04 at 3 23 37 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/a7f353f9-f9cb-44ec-b3af-9e93ff3d5aa1">
  <br>
  <em>Image 3.1.26: Main electrical board insertion.</em>
</p>

<p align="center">
  <img width="327" alt="Screenshot 2023-11-04 at 3 24 16 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/a81a268e-58c0-42a8-bfd0-f89e9e45cbbe">
  <br>
  <em>Image 3.1.27: Auxiliary sensor and tracker insertion.</em>
</p>

<p align="center">
  <img width="627" alt="Screenshot 2023-11-04 at 3 24 49 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/b2e1a80b-912c-4bb3-9689-4acfc4d0fa35">
  <br>
  <em>Image 3.1.28: Final solar cells added.</em>
</p>

### Reel In System

The key factors that were focused on while designing the reel-in mechanism were the mechanism’s durability, and its reel-in torque. These are the two most basic properties the mechanism must exhibit, because if the mechanism breaks, or the torque is not high enough, the balloon will not be able to be reeled in. To achieve these two qualities, the base structure is composed of five ¾ inch pieces of plywood securely fastened together with screws instead of adhesive or nails, which tend to be less secure. A highly important part of the assembly process was ensuring each piece of wood intersected the other at an exact 90° angle so that they fit snugly against each other and prevent any unnecessary stress on the structure. Next, the bearings selected can withstand 1500 pounds of static load and 2900 pounds of dynamic load each, ensuring they can function smoothly while enduring the balloon’s upward forces. Each bearing is secured to the reel-in structure with four ⅜ inch bolts, preventing any play, instability, or weakness in the rotating rod that reels the balloon in. Finally, instead of having the motor shaft directly reel-in the balloon, it is attached to the structure in a different place, and drives a rod which is connected to the balloon, via chain. This takes radial load as well as transient forces (sudden gust of wind, balloon bobbing, etc) off the axle of the motor, which is prone to damage under load, and re-distributes it on the much stronger rod and bearings. See figure 3.2.1 for 
reel-in system renderings, and figure 3.2.2 for reel-in drawing.

<p align="center">
  <img width="616" alt="Screenshot 2023-11-04 at 3 25 51 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/e82f69a0-2237-467c-a5d3-329a61514b02">
  <br>
  <em>Figure 3.2.1 - Reel-in system renderings. The two renderings on the right have two walls removed for better visibility of internal components.</em>
</p>

<p align="center">
  <img width="548" alt="Screenshot 2023-11-04 at 3 26 29 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/e50492d1-4c06-4eb9-a583-e8754269d170">
  <br>
  <em>Figure 3.2.2 - Reel-in system drawing.</em>
</p>

For the second key quality of the reel-in mechanism, high torque, a 72:11 gear ratio was used to ensure the mechanisms’ rotating force was comfortably above the amount required to overcome the balloon’s buoyant force and reel it in. The gear ratio utilizes mechanical advantage to ensure it has a high torque. Mechanical advantage relies on the fact that the ratio of the input to output force always stays the same. For gears, this is represented in the gearset’s gear ratio, and this equation where w is the angular velocity of the gear, N is the number of teeth on the gear, and r is the radius of the gear:

MA = (W_a/W_b) = (r_b/r_a) = (N_b/N_a)

Therefore, since the mechanical advantage of this gearset is 72/11, the gear being driven has a radius 72/11 times the gear that is driving. This ratio makes the final gear rotate 72/11 times slower, but in exchange its force output is 72/11 times larger.

The motor’s torque is rated at 1.2 Nm by the manufacturer, which, with a 72:11 gear ratio, allows the reel-in mechanism to produce 7.855 Nm of torque, which is well over the 0.721-1.153 Nm torque produced by the balloon, theoretically allowing the reel-in mechanism to easily retract the balloon (see Theoretical Results - Calculations). 

Theoretical Results - Calculations:
Manufacturer motor torque rating: *1.2Nm
Gear ratio: 72/11
Theoretical reel-in system torque: 1.2Nm*72/11 = **7.855Nm**

Balloon buoyant force: 37.829N
Rod radius (for string): 0.75 to 1.2in = 0.0191 to 0.03048m
Opposing torque exerted by balloon: 37.829N*(0.0191 to 0.03048) = **0.723 to 1.153Nm**
Prior to the tethered launch, the motor and the reel-in mechanism were tested to ensure the system’s actual torque would be large enough to overcome the buoyant force of the balloon. Tests were conducted by testing how much weight the motor and reel-in system could each move vertically. Their respective maximum weights lifted were determined by the largest weight they could lift without getting stuck. This means that the force they are producing is just on the cusp of being overcome by the force of gravity on that weight, and is essentially equal to the force of gravity on that weight. A pulley system was set up to allow weights to be lifted in a controlled and vertical path (Figures 3.2.3 and 3.2.4). 

<p align="center">
  <img width="292" alt="Screenshot 2023-11-04 at 3 28 38 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/7ffdeb68-5e63-41f1-a148-6f615a5313cd">
  <br>
  <em>Figure 3.2.3 - Testing motor torque.</em>
</p>

<p align="center">
  <img width="279" alt="Screenshot 2023-11-04 at 3 28 44 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/483e4fc7-0c95-49e6-a7c1-234f57b1e1ad">
  <br>
  <em>Figure 3.2.4 - Testing reel-in system torque.</em>
</p>

During multiple rounds of testing, the motor consistently pulled a maximum torque of about 0.255 Nm (see Results from Testing - Calculations). There are three possible reasons for the discrepancy between the manufacturer’s claims and the actual torque. First, the power supplies used, the Mastech HY3006D DC power supply, can only reach a maximum of 30 volts and 6 amps, which outputs 180 watts. The motor, however, reaches a maximum power consumption of 350 watts, so during testing, it was not able to reach its maximum power, thus unable to reach its maximum torque. Additionally, the motor used had been used the previous year, meaning it may have had corrosion, needed lubrication, or experienced general wear and tear and needed maintenance to operate efficiently. Finally, the ceiling beams used as a makeshift pulley were not the most ideal solution because they created a large amount of friction on the string, further lowering the observed torque of the motor.

With an actual motor torque being about 0.255 Nm, the theoretical torque of the whole reel-in system is about 1.667 Nm (see Results from Testing - Calculations). However, during testing, the reel-in system consistently pulled just under that—about 1.526 Nm (see Results from Testing - Calculations). This makes sense, because the system is not 100 percent efficient—some force is lost to friction between the gears and chain, and more is further lost to the friction in the bearings.

Results from Testing - Calculations
Max weight lifted by motor itself: 1637g = 1.637kg
Force required = 1.637kg*9.8m/s^2 = 16.0426N
Motor axle radius = ⅝in = 0.015875m
Motor torque: 16.0426N*0.015875m = **0.254676Nm**
Theoretical reel-in system torque with actual motor torque: 0.254676Nm*72/11 = **1.667Nm**

Max weight lifted with reel-in system: 9lbs
9lbs = 40.05N
Reel-in system actual torque: 40.05N * 0.0381m = **1.525905Nm**

### Yagi Antenna

APRS is a widely used protocol for  transmitting data over amateur radio frequencies. However, APRS signals are often weakened or deflected by obstacles such as trees, buildings, and hills. To overcome these limitations, Yagi antenna and fox hunt systems are employed. At close range, the Yagi antenna's directional characteristics and high gain make it an ideal solution for finding the payload.

The design of the Yagi Antenna revolves around the frequency of the MicroFox MF2 transmitter at 146.165 MHz. This translates to a wavelength of roughly 70 inches. Using this information the driven element length is derived to be 35 inches, or half the wavelength. This relationship is based on the physics of wave propagation. When a signal is transmitted or received by an antenna, it interacts with the electric and magnetic fields generated by the antenna. The length of the antenna is designed to create a resonance that maximizes this interaction, leading to better transmission or reception of the signal. In particular, when an antenna's length is half the wavelength of the signal it is intended to work with, it creates a standing wave pattern that enhances the interaction between the antenna and the signal. This results in higher efficiency and better performance of the antenna.

<p align="center">
  <img width="329" alt="Screenshot 2023-11-04 at 3 30 18 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/b7cc6fd0-f96e-411c-b355-9af57853433c">
  <br>
  <em>Figure 3.2.1: Yagi antenna dipole element.</em>
</p>

While the driven element is the only element of the Yagi antenna that is excited, there are two additional parasitic elements to help transmit the energy toward the driven element. The first parasitic element is the driven element (Above the feed in Figure 3.2.2), or the element that is positioned in front of the driven element. It is shorter than the resonant length, resulting in a capacitive reactance that causes the reradiated signals to be advanced in phase. This helps to further focus the radiation in the forward direction, enhancing the gain and directivity of the antenna. It has been experimentally determined that the director element should be roughly 0.45λ causing the director to be 32’’.

The second parasitic element is the reflector element. Having at least one reflector element is important in determining the front-to-back ratio of the antenna, there is only one as adding more reflectors results in diminishing returns. Having the reflector slightly longer than resonant serves two purposes. The first is that the larger the element is, the better of a physical reflector it becomes. Secondly, if the reflector is longer than its resonant length, the impedance of the reflector will be inductive. Hence, the current on the reflector lags the voltage induced on the reflector. The director elements (below of the feed in Figure 3.2.2) will be shorter than resonant, making them capacitive, so that the current leads the voltage. This will cause a phase distribution to occur across the elements, simulating the phase progression of a plane wave across the array of elements. This leads to the array being designated as a traveling wave antenna. By choosing the lengths in this manner, the Yagi-Uda antenna becomes an end-fire array - the radiation is along the +x-axis (as shown in Figure 3.2.2). It has been experimentally determined that the reflector element should be roughly 0.58λ, causing the reflector to be 41’’.

<p align="center">
  <img width="610" alt="Screenshot 2023-11-04 at 3 31 02 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/40374820-1fe1-4b17-ae09-bdbb6a423e50">
  <br>
  <em>Figure 3.2.2: Yagi antenna design.</em>
</p>

It is important to recognize that the distances between the elements in the Yagi-Uda antenna play a role in maximizing antenna gain:

<p align="center">
  <img width="550" alt="Screenshot 2023-11-04 at 3 31 34 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/aaa054fe-2cd1-48ad-8507-2f3bd3399af6">
  <br>
  <em>Figure 3.2.3: Gain versus separation between dipole to director.</em>
</p>

The above graph shows that theoretical gain is maximized when the distance between dipole and director is 0.2λ. Similarly, the theoretical gain is maximized when the spacing from the dipole to the reflector is 0.125λ. This causes the distance between dipole to reflector to be 7’’ and dipole to director to be 11.5’’ (See Figure 3.2.2). 

## CUT DOWN MECHANISM

### Aim

The cut-down mechanism’s goal is to cut the string at a certain altitude, releasing the balloon to begin its descent. After trial and error, it was determined that the most efficient way to do this was using Kanthal wire. This wire is from a family of iron-chromium-aluminum with a particularly high resistance that causes it to heat up to upwards of 1400 C when current is run through it. When the pressure sensor reaches a certain threshold, a current pulse is transmitted to a relay that releases charge stored in capacitors to the Kanthal wire, which comes into contact with the string. When the wire heats up, the string is cut, and the payload is successfully detached from the balloon. The wire is wrapped around the string several times to increase the points of contact and ensure a successful cut.

### Circuit Diagram and Logic

<p align="center">
  <img width="623" alt="Screenshot 2023-11-04 at 3 33 22 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/9054dc59-e6c8-4f9c-9fd2-6609d9e5689d">
  <br>
  <em>Figure 4.2.1: Cut Down Mechanism Circuit Diagram.</em>
</p>

A relay works by allowing current to flow between input and output when the signal is above 2.5 V and blocking current when the signal is below 2.5 V (see Figure 4.2.1). Two 25F capacitors are connected in series, so their equivalent capacitance is 12.5 F. They are charged at 6.4 V (see Experiments and Calculations section for explanation) so that when the signal is turned on from the Arduino (see Electrical and Software Design – Digital Outputs), a large amount of current will flow through the heating wire from the capacitors. Capacitors are used rather than rechargeable batteries because the current is higher and it will stop flowing to the heating wire in a matter of seconds (see Table 4.3.1). If a rechargeable battery were used, the heating wire would stay less hot than needed for longer than needed, increasing the possibility that the heating wire could not cut the string or damage other components of the payload.

### Experiments and Calculations

To find the most efficient voltage for the cut-down mechanism, the amount of charge used and the length of time it took to cut the string were recorded over different voltages. A string carrying the approximate weight of the payload (1 kilogram) was suspended with a wire wrapped around it to simulate the cut-down mechanism under the same tension on the string that would be present during the launch. The results are included below in the table:

<p align="center">
  <img width="641" alt="Screenshot 2023-11-04 at 3 34 31 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/94befd47-bf35-4b5e-b524-c1d53315e26d">
  <br>
  <em>Table 4.3.1: How a change in voltage affects the current and time of the cut-down mechanism.</em>
</p>

<p align="center">
  <img width="630" alt="Screenshot 2023-11-04 at 3 35 04 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/1a659194-2fff-4af7-aaf3-732e77b52a91">
  <br>
  <em>Figure 4.3.1: Charge Required To Cut String (C) vs Voltage Applied (V).</em>
</p>

After around 4 volts, the charge levels out, meaning that we would be able to use a capacitor that can hold anything between around 4 and 7 volts to fulfill the requirement of cutting the string. Using two 25 F 3.2 volt capacitors in series (which results in the equivalent of a 12.5 F 6.4 volt capacitor), the voltage the capacitor could hold amounted to 6.4 volts, which was in the optimal range demonstrated by the previous experiment and accompanying graph.  

### Code Logic

The pressure sensor is used to determine the altitude of the payload. The code (see Appendix IV) consists of a loop to continually check the pressure. The desired cut-down altitude is around 30,000 meters, which corresponds to around 1.16 kPa. However, the reference pressure gauge did not reach this low, so the threshold pressure was set to 1.5 kPa, and a 15 minute time delay was implemented. If the pressure has reached 1.5 kPa and the cut-down mechanism has not already been run, wireCut is set to true and the cutPinOut to HIGH (see Figure 4.2.1), which causes the Arduino to send 5V to the relay, triggering the release of current from the capacitors. This signal is sustained for 5 seconds, over three times as long as needed to cut the wire to be certain that the wire cuts (see Table 4.2.2). From the capacitors, the current travels through the wires to the ground, heating the wire wrapped around the string and cutting it. After the string is cut, the capacitors are fully discharged, and the wire is no longer heated to prevent anything on the payload from being damaged.

A backup trigger was also added so that in a worst case scenario, the string would still be cut: the signal is activated approximately 3 hours, or 1.08107ms, after the Arduino has been turned on.

```bash
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
```
<em>Figure 4.4.1: Cut-Down Mechanism Code.</em>

### Testing

The first test for the cut-down mechanism was a syringe test. The cut-down mechanism was set to occur at 50 kPa. The syringe was used to manipulate the pressure reading to 50 kPa, and when this reading occurred, the current was sent to the cut-down mechanism, which successfully cut the string. A pressure chamber was then used to test the mechanism under more realistic conditions. When the vacuum chamber reached the set threshold pressure of 1.5 kPa, the cut-down mechanism was successfully activated after the delay, and cut the string. 

## ELECTRICAL AND SOFTWARE DESIGN

<p align="center">
  <img width="626" alt="Screenshot 2023-11-04 at 3 37 22 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/fef81f1a-01c5-4254-90c0-d4b099bc65ff">
  <br>
  <em>Figure 5.1: Full Circuit Diagram of Balloon Payload.</em>
</p>

### Analog Inputs

The Arduino’s analog pins can sense from 0 to 5 volts, and they have 1024 possible readings. The analogRead() function returns an integer from 0 to 1023; this can be interpreted as the voltage connected to the pin by mapping these integers to the voltage range:

V = analogRead(pin) * (5.0V/1023)

Thus, voltage can be measured to within (5.0V/1023) = 0.00489V with analog pins.

**A0: Gas Pressure Sensor**

The pressure sensor outputs a voltage from 0V to 5V that is linearly proportional to the absolute air pressure (see Experiments Conducted). The pin will read the sensor's voltage when it is connected to power, ground, and analog pin 0. From there, a linear fit is applied to convert this voltage to pressure in kPa (see Sensor Calibration and Appendix IV). 

**A1: Outside Temperature Sensor**

A thermistor in contact with the outside air will change its resistance inversely to the temperature outside the payload (see Experiments Conducted). The thermistor is connected to 5V and on the other side to a 10 k resistor; that resistor is grounded, and analog pin 1 is connected between the two components.

Let x be the resistance of the thermistor. The total voltage across both components is 5V, and they share the same current, I. By V = IR:

5V = I * x + I *10kiloohm

Also, let A be the voltage measured at analog pin 1, which can be calculated using the analog input, as mentioned above. Then:

A=I*10kiloohm

I=A/10kiloohm

Substituting, x can be isolated:

5V=A/(10kiloohm*x) + A

x=(10kiloohm*(5V-A))/A

Thus the thermistor’s resistance can be calculated and logged. After the launch, this can be processed into an actual temperature value (see Sensor Calibration).

**A2: Inside Temperature Sensor**

The inside temperature sensor is also a thermistor and works in the same way as the outside temperature sensor. The only difference is the placement of the thermistor itself.

**A8-11: Solar Panels**

See Experiments Conducted – Solar Cell Efficiency

**A4-5: Real Time Clock**

It is worth noting that analog pins 4 and 5 are dedicated to communication with the real time clock that is embedded in the data logger.

**2: Ultrasonic Sensor – Echo**

See Experiments Conducted – Speed of Sound

**11: Humidity Sensor**

The humidity sensor is wired to power, ground, and digital pin 11. The component sends a PWM signal through the digital pin to communicate its humidity reading to the Arduino (see Experiments Conducted – Humidity). Then, the source code interprets this reading as a percentage.

### Digital Outputs

**3: Heating Pads**

Digital pin 3 is connected to a switch that controls the power flow to the heating pads. This system works exactly like the cut-down mechanism (see Cut Down Mechanism), except instead of capacitors, a battery is connected to the pads to generate a weaker but steadier current flow. When the inside temperature drops below 0 degrees celsius, which means the thermistor’s resistance is around 31000, digital pin 3 is activated and the heating pads turn on (see Appendix IV). The heating pads prevent the components from getting too cold: the project will reach a low of around -42 oC, while most parts are rated at -40o at an absolute minimum.

**4: Buzzer**

Digital pin 4 is connected to a simple buzzer. Every ten seconds, this pin and therefore the buzzer turns on for two seconds (see Appendix IV). The buzzer’s loud sound will aid in the process of finding the payload if it is close but not visible.

**8: Cut Down Mechanism**

To prevent random errors from causing a premature cutdown, once the average of the last ten pressure readings drops below 1.5 kPa, there is a 15 minute delay and then digital pin 8 is turned on. This activates the cut down mechanism circuit (see Cut Down Mechanism, Appendix IV). Power will flow from the capacitors to a wire, which will heat up and cut the string that releases the payload.

**12: Speed of Sound – Trigger**

See Experiments Conducted – Speed of Sound

### Data Logging 

Every two seconds, all data points are logged according to the following format:

millis, stamp, P(kPa), T_inside(ohm), T_outside(ohm), latitude, longitude, altitude, sound(mph), PM1.0, PM2.5, PM10, hum(%), V1, V2, V3, V4. The comma separation allows for the data to be read as a CSV file, so it can be processed by Google Sheets or Excel.

* Millis (ms) is the number of milliseconds that have passed since the start of the program.
* Stamp is a time stamp from the RTC’s stored time. The clock does not need to be accurate—all that matters are the relative times if the Arduino temporarily shuts off.
* P (kPa) is the calibrated pressure in Kilopascals.
* T_inside (ohm) is the resistance of the inner thermistor in ohms. After the launch, this can be converted to Celcius or Farenheit if needed.
* T_outside (ohm) is the resistance of the outside thermistor in ohms. After the launch, this can be converted to Celcius or Farenheit if needed.
* Latitude and Longitude (10^-7 degrees) are the latitude and longitude values of the payload which represent its geographical position.
* Altitude (mm) is the payload’s altitude in millimeters.
* Sound (mph) is the measured speed of sound in miles per hour, for the Speed of Sound independent project.
* PM1.0, PM2.5, and PM10 (g/m3) are the levels of the three measured types of particulate matter in the atmosphere in micrograms per cubic meter. This is for the Particle Concentrations independent project.
* Hum (%) is the relative humidity as a percentage of what the air can hold, for the Humidity independent project.
* V1, V2, V3, and V4 (V) are the voltages generated by each of the four solar panels for the Solar Cell Efficiency and Wavelengths of Light independent projects.

### Code Logic

<p align="center">
  <img width="642" alt="Screenshot 2023-11-04 at 3 46 08 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/6460ec09-a5a2-43b1-ad21-dbc8d920ea58">
  <br>
  <em>Figure 5.6.1: Arduino Source Code Logic.</em>
</p>

## TRACKING

### Introduction

When a radio transmitter sends a signal, it generates an oscillating electric current in the transmitting antenna. This current creates an electromagnetic wave, which consists of oscillating electric and magnetic fields. This wave travels through space at the speed of light, carrying the encoded information. At the receiving end, the electromagnetic wave interacts with the receiving antenna, inducing a small oscillating electric current in it. This induced current is proportional to the electric field of the incoming wave. The radio receiver processes this current and extracts the encoded information from the signal.

Amplitude Modulation (AM) is a modulation technique in which the amplitude of a carrier wave is varied in accordance with the instantaneous amplitude of the modulating signal, which carries the information to be transmitted. The frequency of the carrier wave remains constant throughout the process. The primary advantage of AM radio is its relatively simple implementation and low cost. However, it is more susceptible to noise and interference, resulting in lower signal quality compared to FM radio. Additionally, AM radio has a longer range due to the propagation characteristics of the lower frequency carrier waves, enabling signals to travel farther and refract around obstacles.

Frequency Modulation (FM) is a modulation technique in which the frequency of a carrier wave is varied according to the instantaneous amplitude of the modulating signal, while the amplitude remains constant. This method offers several advantages over AM, including improved signal quality and reduced susceptibility to noise and interference. The higher frequency of FM radio waves enables them to carry more information, resulting in higher audio fidelity. However, FM radio signals have a shorter range compared to AM radio signals, as they are more readily absorbed by obstacles and have less ability to refract around them.

### GPS

To understand how the PicoAPRS transmits GPS data packets, one first needs to understand GPS and how they are compiled into data packets. GPS, or Global Positioning System, is a satellite-based navigation system that provides accurate location and time information to GPS receivers on Earth. It was developed by the United States Department of Defense and initially used for military purposes, but it has since become a widely used civilian technology.

GPS determination works through a process called trilateration. A GPS receiver calculates its distance from each satellite by measuring the time it takes for the satellite's signal to reach the receiver. With the distance information from at least four satellites, the receiver can determine its position in three dimensions (latitude, longitude, and altitude).

For example, let's suppose that, in a coordinate system, the locations of the three base stations A, B and C are (0,0), (36,0) and (16,32) respectively (1 unit represents 1 km). It is found that the distance between P and the three base stations A, B and C are 29 km, 25 km and 13 km respectively. For this example, points A, B, C and P lie on the same horizontal plane, however this could be extrapolated into 3D. By looking at the intersection of all the circles, point P is found.

<p align="center">
  <img width="314" alt="Screenshot 2023-11-04 at 3 47 18 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/008397cc-5c35-47e2-857a-86b454bc10a3">
  <br>
  <em>Figure 7.2.1 - Trilateration example.</em>
</p>

Once the GPS position is determined, it is compiled into a data packet along with other relevant information, such as the velocity, course, and a timestamp. This data packet is then encoded using the APRS (Automatic Packet Reporting System) protocol. The APRS packet consists of an AX.25 header (containing sender, recipient, and digipeater information), a payload (with position, velocity, and other data), and a checksum for error detection.

### PicoAPRS

The primary tracking method used was FM modulated 1200 baud AFSK using the APRS data transmission protocol. In AFSK modulation, binary data (1s and 0s) are represented by two distinct audio frequencies, typically 1200 Hz for binary 1 and 2200 Hz for binary 0. These audio frequencies are used to modulate a low-power RF carrier signal. When the binary data changes, the audio frequency shifts accordingly, hence the name "frequency shift keying."

The reason behind this method is that 1200 bits per second is low compared to modern digital transmission, yet powerful enough for the transmission of GPS coordinates, allowing for the battery to last as long as possible. Furthermore, the use of FM allows for a robust transmission, increasing reliability.

The PicoAPRS transmits through the digipeater network and the APRS system. These digipeaters utilize store-and-forward techniques to retransmit packets, thereby propagating the information outward from the source. Additionally, APRS Internet Gateways (IGates) serve as links between the on-air APRS network and the APRS Internet System (APRS-IS). Receiving stations capture the radio signal, demodulate it to retrieve the original AFSK signal, and then decode the AFSK signal to obtain the digital APRS packet. Finally, the received packet is processed, and the GPS location of the balloon is mapped using APRS-IS to track down the balloon.

It is also important to note that the small size of the PicoAPRS transmitter is beneficial in maintaining the low volume and mass of the payload. 

### Fox Hunt Method

The PicoAPRS tracking method is great for tracking the payload, however, APRS signals are often weakened or deflected by obstacles such as trees, buildings, and hills. Due to this, the APRS system is generally only reliable up to 1 mile range around the payload. To overcome these limitations, Yagi antenna (design detailed in Section 3.3) and fox hunt systems are employed. At close range, the Yagi antenna's directional characteristics and high gain make it an ideal solution for finding the payload.

The MicroFox MF2 transmitter (the “fox”), operating at a frequency of 146.165 MHz, generates a continuous wave (CW) signal modulated with Morse code. This signal is produced by an internal oscillator circuit, which controls the output frequency. The generated RF signal is then amplified and transmitted through the device's antenna, radiating into the atmosphere and propagating as an electromagnetic wave.

The directional Yagi antenna is used to detect the signal emitted by the MicroFox MF2 transmitter. The Yagi antenna consists of a driven element, a reflector, and multiple director elements. These elements are arranged in a linear configuration along a boom, with the spacing and lengths of the elements optimized for the desired operating frequency (details on how this optimization is made is explained in Section 3.3). The Yagi antenna operates on the principle of mutual coupling between its elements, which results in a highly directional radiation pattern with a narrow beamwidth and significant forward gain.

When receiving the signal transmitted by the MicroFox MF2, the Yagi antenna's directionality plays a crucial role in determining the location of the payload. By pointing the antenna in different directions and monitoring the received signal strength, the tracking team can estimate the direction of the signal source, i.e., the balloon payload. This process is known as radio direction finding (RDF). The Yagi antenna is most sensitive to signals arriving from the direction of its main lobe, which corresponds to the antenna's maximum gain. As the antenna is rotated, the signal strength varies, with the highest signal strength indicating the direction of the payload.

By continuously taking RDF measurements from different geographical locations, the payload's position can be triangulated. The intersection of the estimated bearings from each measurement point provides an accurate estimate of the payload's location (similar to how GPS location is triangulated from satellites). As the payload is approached, the signal strength will naturally increase. However, at close range, the signal might become too strong, making it difficult to accurately determine the direction due to the antenna's reduced directionality. This is because the strong signal will likely be picked up by the antenna, regardless of the direction it is pointed. Using an attenuator in this scenario helps by decreasing the signal strength received by the antenna(experimentally determined to be more reliable then adjusting the radio frequency). By lowering the signal strength, the antenna's directionality is preserved, enabling the ongoing determination of the direction from which the signal originates even at close range. Incrementally increasing the attenuation level allows for a consistent indication of the signal direction, ultimately guiding the search toward the payload's location.

### Antenna Gain

Antenna gain is a measure of the effectiveness of an antenna in radiating or receiving energy in a particular direction compared to an ideal isotropic antenna. It is often expressed in decibels (dB) and indicates the antenna's ability to concentrate the RF energy into a specific direction or pattern. A higher gain implies a better directivity and increased efficiency in focusing the transmitted or received energy.

Antenna gain is essential for several reasons. Firstly, a higher gain antenna can focus the RF energy more effectively, allowing for increased signal strength in the desired direction. This can lead to better reception, improved signal quality, and a longer communication range. Secondly, by minimizing the energy radiated in undesired directions, a high-gain antenna can reduce interference and noise from other sources. Lastly, high gain helps maximize the effective radiated power, making the antenna more effective at longer distances.

<p align="center">
  <img width="176" alt="Screenshot 2023-11-04 at 3 49 30 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/1862c429-4f16-4fc4-a11c-d66282c67d3a">
  <br>
  <em>Figure 7.5.1 - Gain and beamwidth options for Yagi antenna.</em>
</p>

To determine the experimental antenna gain, a comparison can be made between a regular radio antenna and a Yagi antenna. The regular antenna, in this case, serves as a close approximation to an isotropic antenna. In practice, no real antenna achieves perfect isotropic radiation, but a regular antenna with a relatively omnidirectional radiation pattern can closely resemble one.

In the experiment, the regular antenna achieves a range of ~400 meters, while the Yagi antenna achieves a range of ~1300 meters. By dividing the regular antenna’s distance by that of the Yagi antenna, a gain of 3.25 is calculated.

<p align="center">
  <img width="412" alt="Screenshot 2023-11-04 at 3 50 08 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/f33556d6-df56-49fe-9a69-5485fc3a8e13">
  <br>
  <em>Figure 7.5.2 - Range of regular antenna.</em>
</p>

<p align="center">
  <img width="339" alt="Screenshot 2023-11-04 at 3 50 13 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/67b6933d-577d-4efe-b629-8801f51c3929">
  <br>
  <em>Figure 7.5.3 - Range of constructed Yagi antenna.</em>
</p>

It’s also worth noting that this range of the Yagi antenna was done in San Francisco, where houses may have disrupted the maximum range of the antenna. Furthermore, this range test serves as a test of the Fox Hunt method, as there was no prior knowledge of the location of the MicroFox transmitter before searching.

In order to determine the theoretical gain of the Yagi antenna, a software application  called 4NEC2 was utilized to calculate and plot the three-dimensional radiation patterns. 

<p align="center">
  <img width="382" alt="Screenshot 2023-11-04 at 3 51 30 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/544e05c5-2fdc-4c46-a03d-edecc9ee58f5">
  <br>
  <em>Figure 7.5.4 - Yagi antenna model.</em>
</p>

Once the antenna has the desired dimensions, then 4NEC2 can generate three dimensional radiation plots of the antenna at the frequency 146.165 MHz as shown below

<p align="center">
  <img width="332" alt="Screenshot 2023-11-04 at 3 52 10 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/3d2c1bcd-820f-4a51-8f1b-200da1014d19">
  <br>
  <em>Figure 7.5.5 - 4NEC2 radiation pattern calculation for Yagi antenna.</em>
</p>

The predicted directivity gain (at max) is 7dBi. It is common for the terms directivity and gain to be used interchangeably. However, the distinction lies in the fact that directivity does not account for antenna losses such as dielectric, resistance, polarization, and VSWR losses. In Yagi antennas, these losses tend to be minimal, leading to directivity and gain being approximately equal.

The measured gain of 3.25 dB, as calculated through the comparison between the regular antenna and the Yagi antenna, demonstrates the effectiveness of the Yagi antenna in the experiment. However, the predicted directivity gain of 7dBi, as determined by the 4NEC2 software simulation, shows a 54% discrepancy between the theoretical and experimental gains. However, this could easily be due to an imperfection in the Yagi antenna build (the Yagi was created out of measuring tape, after all) or obstructions in the Yagi antenna range test as it was done in San Francisco rather than an ideal open plain.

### Tests

Two distinct tests were conducted in San Francisco to evaluate the performance of the Yagi antenna and the fox hunting method in both line of sight and obstructed environments. These tests were performed as real-world search scenarios, with no prior knowledge of the payload's location, simulating the conditions of a typical high-altitude balloon recovery.

#### Line of Sight Test

The first test was a line of sight test conducted at the relatively flat Mission Dolores Park. This test aimed to assess the Yagi antenna's performance in an unobstructed environment. The Yagi antenna successfully demonstrated its ability to determine the payload's direction and location within the park.

<p align="center">
  <img width="296" alt="Screenshot 2023-11-04 at 3 53 00 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/45ba06ce-526a-40e8-a1c5-6134b8878db4">
  <br>
  <em>Figure 7.6.1 - Line of sight test distance.</em>
</p>

#### Obstruction Tests

The second test involved tracking the payload through the San Francisco urban landscape, which included various obstructions such as buildings and natural terrain features. This obstruction test aimed to evaluate the Yagi antenna's performance in a more challenging environment with multiple signal reflections and obstacles. Despite the complex setting, the Yagi antenna was able to track the payload successfully over a distance of more than 1 km, as discussed in the antenna gain section above. 

In addition to the tests performed in San Francisco, a comprehensive 2-mile test was conducted, utilizing both the PicoAPRS system and the Yagi antenna for tracking. The objective of this test was to assess the combined effectiveness of these two tracking methods in locating the payload. The payload was tracked within half a mile using the PicoAPRS system, providing a general location of the payload. The Yagi antenna was then used to pinpoint the payload's exact location, successfully completing the search.

<p align="center">
  <img width="266" alt="Screenshot 2023-11-04 at 3 53 53 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/4b648a20-8472-4120-a318-8be7d67c8697">
  <br>
  <em>Figure 7.6.2 - Comprehensive test distance.</em>
</p>

Finally, a test was conducted to evaluate the tracking capabilities between San Francisco and Menlo Park, covering a significantly larger distance (40 km). In this test, the payload location was successfully identified using the PicoAPRS system. It is essential to note that this test did not involve a physical search for the payload; instead, the correct location was accurately plotted on a map based on the received tracking data.

<p align="center">
  <img width="353" alt="Screenshot 2023-11-04 at 3 54 45 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/939ff611-9626-4bb8-b8d4-27dea916b767">
  <br>
  <em>Figure 7.6.3 - Long Range PicoAPRS test Distance.</em>
</p>

##  SENSOR CALIBRATION

### Pressure

#### Method

To calibrate the pressure sensor, a reference gauge was placed in a vacuum chamber along with the Vernier gauge and Arduino. They were turned on at approximately the same time, with both logging to separate SD cards. Then the chamber was evacuated as much as possible.

Once the chamber was empty, air was slowly let back into the chamber. Finally, the SD cards were removed and copied into a shared document for comparison. Overall, there was around five minutes of data.

The reference gauge only logged every 5 seconds, while the Arduino logged every 2, so the x-axes, time in seconds, had to be mapped properly. Therefore, the readings every 10 seconds from each source were compared. Because the sensors did not start at the same time, they also had to be aligned. A time offset variable was added to account for this.

Then, the data from both sensors were graphed against each other, and the time offset variable was adjusted until the linear fit resulted in the greatest possible R2, or in other words, the most exact correlation. Finally, the linear fit obtained from this graph could be used to adjust the Arduino’s pressure output.

#### Results

The first Vernier sensor used had to be replaced, so two calibrations had to be performed. The first calibration, at the most optimal time offset value, resulted in the following relationship between the Arduino’s pin reading and the true pressure. A couple of outliers were excluded for more accurate results.

<p align="center">
  <img width="631" alt="Screenshot 2023-11-04 at 3 55 55 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/15ab4e90-bf20-4ac1-934e-b8bf99919667">
  <br>
  <em>Figure 7.1.1: Pressure (hPa) vs. Arduino Pin Reading (V/1023)</em>
</p>

Thus, dividing by 10 to obtain kilopascals, P = reading * (0.252 hPa/V/1023) - 24.9 hPa (see Figure 7.1.1).  The R^2 of 0.999 is incredibly high, indicating precise data. 

Then, the pressure sensor had to be replaced, warranting another round of calibration. Graphing the true pressure versus the new sensor with the old calibration yielded the following graph.

<p align="center">
  <img width="624" alt="Screenshot 2023-11-04 at 3 57 05 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/292a2e25-d2dd-4ea0-874e-6940f1722271">
  <br>
  <em>Figure 7.1.2: Real Pressure (hPa) vs. First Calibration Pressure (kPa)</em>
</p>

Dividing by 10 once again to convert to kilopascals, the relationship displays that P_actual = P_old * 1.01 - 2.38kPa  (see Figure 7.1.2). The R^2 for this fit implies high precision. Combining the two calibrations, the pressure can be calculated from an Arduino reading:

P=1.01(0.252*reading-24.9)-2.38

P=0.255*reading-27.5.

This formula is implemented in the source code.

#### Specifications

The reference gauge had an accuracy of 0.1 hPa=10 Pa. On the other hand, the resolution of the Arduino’s pressure reading depends on the analog pin reading, which must be an integer. Therefore, the pressure is accurate to 0.255 kPa = 255 Pa. In other words, the resolution of the Arduino limits the gauge’s accuracy.

### Temperature Inside and Outside

Several different temperatures were taken with the thermistors and compared to the true temperature, collected with a reference temperature sensor accurate to 0.1oC. The Arduino outputs the resistance of the thermistor, so this first needs to be converted to a temperature value. According to the Steinhart Hart Equation for 10k Thermistors, 

T(K)=1/(0.00112530885+0.00023471186*ln(R)+0.00000008566 * ln(R)^3) 

where R is the resistance in ohms. This can be converted into Celcius by subtracting 273.15. The inside and outside thermistors consistently showed similar values, so the outside thermistor was used for calibration.

<p align="center">
  <img width="631" alt="Screenshot 2023-11-04 at 3 59 53 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/c27586d4-e1da-47f1-9b56-041620bf3ead">
  <br>
  <em>Table 7.2.1: Real Temperature (oC), Thermistor Temperature (oC), and Percent Error (%)</em>
</p>

*: Collected using the measurement on the front of the cold chamber.

**: Collected using the Apple Weather app.

The percent error is below 5% for most of the measurements, indicating solid accuracy and precision.

The temperature reading’s accuracy is mainly limited by the resolution of the Arduino. Although the formula to find the exact temperature from the resistance is complicated, the error in the thermistor’s resistance can be calculated using the fact that the Arduino has 1023 possible outputs. The formula for the resistance, based on the reading, is:

10000.0 / (tempInReading/1023.0) - 10000

Let x be the analog input reading. Then the derivative of this resistance R with respect to x is:

dR/dx= (-1.023*10^7)/x^2.

Rearranging and dividing both sides by the original formula for the resistance:

error=dR/R=(-1.023*10^7)/x^2 * dx * 1/((-1.023*10^7)/x - 10000).

This means that the percent error in the resistance will be 0.13% at R=10000ohm (reading=512, T=25oC), and will increase from there as the temperature decreases and resistance increases. In other words, as the balloon rises, the error will start very small but will eventually reach a significant value.

### GPS

At Sam’s house, the GPS outputted, on average, the coordinates (37.4283895, -122.2114417) and an altitude of 50000.33 mm = 50.00033 m. Google Maps says the actual coordinates are (37.42837, -122.21140) and the website What Is My Elevation states the altitude is 85 m. These values give errors of 0.000052% and 0.0000034% for latitude and longitude respectively, and a 41% error in altitude.

The geographical position should indeed be more accurate than the altitude because GPS works by contacting satellites in space. Relative to the scale of measurement, these are all at incredibly similar vertical distances from the payload, so a change in altitude would not result in a large change in signal response time from the satellites. Thus, it is harder to detect a change in altitude than one in geographical location, implying that the above errors make sense.

### Speed of Sound (Noah)

The calibration of the speed of sound sensor was carried out by taking an average of measurements over a 10-minute period. This average value was then used to determine a single correction factor that could be applied to future speed of sound measurements. The rationale behind this approach is that the observed inaccuracy is more likely to stem from variations between the inputted distance between the ultrasonic sensor and the plate relative to the real distance, rather than the resolution of the sensor itself (See Experiments Conducted, Speed of Sound Sensor Section).

In the first calibration, the distance was found to be not exactly 2 inches. Specifically, it was 1.94155 inches. Then, for the second calibration, the average speed was recorded at room temperature and sea level. The sensor returned an average of 698 mph, while the speed should be 767.3 mph. This is a 9.08% error, so the distance needed to be increased by 9.08%. This is reflected in the source code’s distance variable as 1.94155 * 1.0908.

### Humidity (Derrick)

Three separate calibrations were done for the humidity sensor: one in a tightly controlled environment—the sensor stored overnight in a closed ziploc bag with a Sodium Chloride and water mixture that produces a steady humidity of 75% after six hours. The other two tests were done by allowing the humidity sensor to sit outdoors for at least five minutes to allow their readings to stabilize after being brought outdoors. These two readings were then compared to weather report humidities for Menlo Park/Atherton to gauge accuracy. The resulting data revealed that each reading was about 17.5 to 18.5 percent off (Figure 7.5.1). Although this means that the sensor is not accurate, it is precise. Since the deviation from the actual humidity is nearly constant in every test, it is relatively safe to assume that the humidity sensor will be that percentage lower every single time. This way, the sensor can still be used to collect humidity data while the balloon is on its way up, and each of the readings just need to be adjusted by +17.5 to +18.5 percent once the data are retrieved.

Data:

NaCl test: actual humidity ~75%, says 56.51% — 18.49% off
3/12/23: actual humidity ~84%, says 66.53% — 17.47% off
3/13/23: actual humidity ~70%, says 53% — 17% off

<p align="center">
  <img width="519" alt="Screenshot 2023-11-04 at 4 04 22 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/63c6ff63-e4ee-43cf-99b0-6783734dba1c">
  <br>
  <em>Figure 7.5.1 - Actual humidity (%RH) graphed against humidity readings (%RH). Each humidity reading is consistently about 17.5 to 18.5 percent lower than the actual humidity.</em>
</p>

###  Solar Cell Efficiency (Parker)

Though solar cells do not need to be calibrated, when tested in full sunlight a multimeter measured 4.1 volts across the solar cells. This value, between the 0 V and 5 V that the Arduino can measure, allows for the precision needed for the given experiments to be carried out.

The resolution is limited by the Arduino, which can give voltage readings within 5V/1023=0.00489 V.

### Wavelengths of Light (Edward)

Refer to the Solar Cell Efficiency calibration explanation.

### Particle Concentrations (Sam)

To calibrate the PM sensor, a match was burned at varying distances from the component. Two rounds of lighting a match and slowly moving it from 5 cm away to 15 cm away were performed. Following is a graph of the average particulate concentrations of PM1.0, PM2.5, and PM10:

<p align="center">
  <img width="628" alt="Screenshot 2023-11-04 at 4 05 29 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/98ec0557-22fc-4609-91be-001ee4df1841">
  <br>
  <em>Figure 7.8.1: Average Particle Concentration (gm3) vs. Time (s).</em>
</p>

The sensor does not seem to be perfect by any means. However, the general trend of the concentrations seems to decline each time the match was lit and then moved away (see Figure 7.8.1). It is difficult to obtain an accurate reference, and one source of error might have been wind, but this qualitative confirmation of this calibration experiment creates confidence in the sensor.

The PM sensor used has a resolution and accuracy of 1microg/m^3, and because I2C communications are used instead of an analog pin on the Arduino, this is the main limiting factor.

## APPENDICES

### Launch Preparation

Launch preparation: Pre-launch form and data/graphs plus experiment protocol sheets.
To be added.

### Nasa Model vs. Exponential Model

<p align="center">
  <img width="621" alt="Screenshot 2023-11-04 at 4 07 19 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/b4c29f68-4f7f-4311-a490-d1b147129f0b">
  <br>
  <em>Image 12.2.1: NASA vs Derived models throughout atmosphere (Red = Derived, Blue = NASA).</em>
</p>

As can be seen from the graph, the NASA and Derived model are quite similar in the beginning—and stay relatively close for the first 5 km. However, that’s where they begin to diverge, with the NASA model having a much faster descent compared to the derived model. It’s at the end though where the gap begins to close a bit. Not fully, however it’s near the end where both converge towards 0. 

### Atmospheric Composition vs. Altitude

<p align="center">
  <img width="642" alt="Screenshot 2023-11-04 at 4 08 34 AM" src="https://github.com/babelnoah/Space-Balloon-Launch/assets/114769700/578d6b7d-3373-4500-bbcd-ce3b90af345a">
  <br>
  <em>Table 12.3.1: Atmospheric Composition vs. Altitude.</em>
</p>

### Source Code

See the GitHub file.
