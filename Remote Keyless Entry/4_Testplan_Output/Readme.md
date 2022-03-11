# Test Plan

## High level Test Plan
|Test_ID| Title|Input|Expected O/P| Actual O/P| Status|
|---|---|---|---|---|---|
|01| Locking the Car  |  Pressing the Swich One time       | All the LEDS should be turn ON        |  All the LEDs are ON       | ✔️|
|02| Unlocking the Car  |  Pressing the Swich two times       | All the LEDS should be turn OFF       |  All the LEDs are OFF       | ✔️|
|03| Alarm activation/deactivation |  Pressing the Swich three times | All the LEDS should be turn ON in clockwise manner |  All the LEDs are turned ON inclockwise manner| ✔️|
|04| Approach the light  |  Pressing the Swich four times| All the LEDS should be turn ON in anticlockwise manner|  All the LEDs are turned ON in anticlockwise manner | ✔️|

# Low Level Test Plan
|Test_ID| Title|Input|Expected O/P| Actual O/P| Status|
|---|---|---|---|---|---|
|01|Pressing the Switch | Setting High at GPIO pin| Button is SET | Button is SET|✔️|

#Output
## 1) When the switch is pressed for one time 
- It should turn ON all the LED's.
 
![Output1_ALL_LEDS_ON](https://user-images.githubusercontent.com/98883965/157869644-4fa28f7d-c8e9-46b9-b33f-26ffce11ff2a.JPG)

## 2) When the switch is pressed for two times
- It should turn OFF all the LED's.

![Output2_ALL_LEDS_OFF](https://user-images.githubusercontent.com/98883965/157869697-2870ac96-297d-4cf2-b390-c5e0bc40430c.JPG)

## 3) When the switch is pressed for three times
- It should turn ON all the LED's in clockwise manner.

![Output3_ALL_LEDS_CLOCKWISE](https://user-images.githubusercontent.com/98883965/157869794-3e7c76a6-4706-4b96-b936-bd643073d707.JPG)

## 4)When the switch is pressed for four times.
- It should turn ON all the LED's in anticlockwise manner.

![OUTPUT4_ALL_LEDS_ANTICLOCKWISE](https://user-images.githubusercontent.com/98883965/157869871-02d84195-3739-47f2-9643-39ff7d0d2792.JPG)
