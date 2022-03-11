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
