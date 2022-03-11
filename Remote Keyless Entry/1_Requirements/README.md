# Abstract
With the rapid growth in the automobile industry and the advancement in the embedded technology, the traditional mechanical key for operating vehicles is gradually replaced by Remote Keyless Entry (RKE) system. Enabling RKE system in vehicles not only improves the security of car access but also facilitates convenience to users. In this project, we have worked on the Locking and unlocking of automobile remotely. The proposed RKE system uses the radio waves on a particular frequency to transmit and receive the data. This system achieves authentication of car by preserving privacy of the communicating entities.
# Description
Keyless remotes contain a short-range radio transmitter, and must be within a certain range, usually 5–20 meters, of the car to work. When a button is pushed, it sends a coded signal by radio waves to a receiver unit in the car, which locks or unlocks the door.  Most RKEs operate at a frequency of 315 MHz for North America-made cars and at 433.92 MHz for European, Japanese and Asian cars. When you press a button on your key fob, you’re waking up its Central Processing Unit (CPU) inside.The CPU sends a data stream to the radio frequency (RF) transmitter. The keyless remote is actually a radio.This data stream contains command and for security, rolling codes. The remote keyless system’s receiver in the car captures the RF signal, extracts it and sends the data stream to the CPU. The CPU decodes it and sends commands to the command module. The toggling of LEDs happen according to the command. The functions of a remote keyless entry system are contained on a key fob. Buttons are dedicated to locking or unlocking the doors. Some remote keyless fobs also feature a red panic button which activates the car alarm as a standard feature.
## Components
The two most important components of RKE are Key fob transmitter and a receiver inside the vehicle
### Key fob Transmitter
![image](https://user-images.githubusercontent.com/66207959/157822771-a134c10f-0076-44a8-b559-210f4c1ff8d6.png)

When a user pushes a button on a car's key fob, a short-range radio transmitter in the fob sends a distinct coded signal to a receiver unit in the car. That as a result unlocks or locks the doors.

### Receiver Module inside vehicle
![image](https://user-images.githubusercontent.com/66207959/157823490-582f8b62-195a-4896-9d4c-cc237840c922.png)

The RKE's RF receiver in the vehicle captures the RF signal, demodulates it and sends the data stream to the CPU, which decodes it and sends commands to the command module.

# Remote Keyless Entry
## Requirements
## High Level Requirements
 |Sl.NO| ID | Title | Description |
 |:------|:-----|:-----|:-----|
 |1. | HLR1 | Locking the Car | It shall turn ON all the Led’s on at the same time. |
 |2. | HLR2 | Unlocking the Car | It shall turn OFF all the Led’s on at the same time. |
 |3. | HLR3 | Alarm activation/deactivation| It shall turn On All Led’s in clockwise manner. |
 |4. | HLR4 |Approach light | It shall turn OFF All led on in anti-clockwise manner. |
## Low Level Requirements
|Sl.NO | ID | Title | Description |
|:------|:-----|:-----|:----|
|1. | LLR1 | Pressing the switch one time | It shall lock the car. |
|2. | LLR2 | Turning LEDs ON | All the LEDs are to be turned ON at the same time. | 
|3. | LLR3 | Printing Lock | Printing the Message as "Lock". |
|4. | LLR4 | Pressing the switch two times | It shall unlock the car. |
|5. | LLR5 | Turning LEDs OFF | All the LEDs are to be turned OFF at the same time. | 
|6. | LLR6 | Printing Unlock | Printing the Message as "Unlock". |
|7. | LLR7 | Pressing the switch three times | It shall activate/deactivate the Alarm. |
|8. | LLR8 | Toggling LEDs cockwise | All the LEDs are to be toggled in clockwise manner. | 
|9. | LLR9 | Printing Alarm activation/deactivation | Printing the Message as "Alarm acticate/deactivate". |
|10. | LLR10 | Pressing the switch four times | It shall approach the ligh. |
|11. | LLR11 | Toggling LEDs anticockwise | All the LEDs are to be toggled in anticlockwise manner. | 
|12. | LLR12 | Printing approch light | Printing the Message as "approach light". |
