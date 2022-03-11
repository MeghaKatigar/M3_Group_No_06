# BiCom System
# Abstract
With the rapid growth in the automobile industry and the advancement in the embedded technology, the traditional mechanical key for operating vehicles is gradually replaced by Remote Keyless Entry (RKE) system. Enabling RKE system in vehicles not only improves the security of car access but also facilitates convenience to users. In this project, we have worked on the Locking and unlocking of automobile remotely. And the vehicle sends the car battery info, window, door and alarm status to the user. The proposed RKE system uses the radio waves on a particular frequency to transmit and receive the data. This system achieves authentication of car by preserving privacy of the communicating entities.
# Description
Description
Keyless remotes contain a short-range radio transmitter, and must be within a certain range, usually 5–20 meters, of the car to work. When a button is pushed, it sends a coded signal by radio waves to a receiver unit in the car, which locks or unlocks the door. This is dual communication system where the vehicle sends the car battery info, window, door and alarm status to the user. Most RKEs operate at a frequency of 315 MHz for North America-made cars and at 433.92 MHz for European, Japanese and Asian cars. When you press a button on your key fob, you’re waking up its Central Processing Unit (CPU) inside.The CPU sends a data stream to the radio frequency (RF) transmitter. The keyless remote is actually a radio.This data stream contains command and for security, rolling codes. The remote keyless system’s receiver in the car captures the RF signal, extracts it and sends the data stream to the CPU. The CPU decodes it and sends commands to the command module. The toggling of LEDs happen according to the command. The functions of a remote keyless entry system are contained on a key fob. Buttons are dedicated to locking or unlocking the doors. Some remote keyless fobs also feature a red panic button which activates the car alarm as a standard feature.
## Components
The two most important components of RKE are Key fob transmitter with Receiver  and a Transmitter with receiver inside the vehicle

## Key fob Transmitter with receiver
![image](https://user-images.githubusercontent.com/66207959/157851011-26fcd259-79b3-468e-a4a5-dce79f44fc09.png)

When a user pushes a button on a car's key fob, a short-range radio transmitter in the fob sends a distinct coded signal to a receiver unit in the car. That as a result unlocks or locks the doors. And the key fob receives the signal from vehicle. The car battery info, window, door and alarm status is displayed.

## Transmitter with Receiver Module inside vehicle
![image](https://user-images.githubusercontent.com/66207959/157851432-53c680ab-0e45-4852-ae2f-ae63d062e775.png)

The RKE's RF receiver in the vehicle captures the RF signal, demodulates it and sends the data stream to the CPU, which decodes it and sends commands to the command module. It also sens the car battery info, window, door and alarm status to the user.

## SWOT Analysis
![image](https://user-images.githubusercontent.com/66207959/157852244-aab27c72-d4af-4079-b7bd-25452b7c8db5.png)
## 5W and 1H
![5W1H Chart BiCom](https://user-images.githubusercontent.com/66207959/157853285-dd1bbb1a-579b-4a29-b437-cc72834f870f.png)
## Requirements
## High Level Requirements
|Sl.NO| ID | Title | Description |
|:------|:-----|:-----|:-----|
|1. | HLR1 | Window Status | It shall show the status of car window. |
|2. | HLR2 | Alarm Status | It shall show the alarm status. |
|3. | HLR3 | Car battery information| It shall display the information related to car battery. |
|4. | HLR4 |Door status | It shall show the status od Door position. |
## Low Level Requirements
|Sl.NO | ID | Title | Description |
|:------|:-----|:-----|:----|
|1. | LLR1 | Pressing the switch one time | It shall show the status of car window. |
|2. | LLR2 | Turning LEDs ON | All the LEDs are to be turned ON at the same time. | 
|3. | LLR3 | Printing window status  | Printing the Message related to window status on to the Keyfob. |
|4. | LLR4 | Pressing the switch two times | It shall show the alarm status. |
|5. | LLR5 | Turning LEDs OFF | All the LEDs are to be turned OFF at the same time. | 
|6. | LLR6 | Printing Alarm status | Printing the Message related to alarm status on to the Keyfob. |
|7. | LLR7 | Pressing the switch three times | It shall shaow the car battery information. |
|8. | LLR8 | Toggling LEDs cockwise | All the LEDs are to be toggled in clockwise manner. | 
|9. | LLR9 | Printing car battery information | Printing the information related to car battery on Keyfob. |
|10. | LLR10 | Pressing the switch four times | It shall show the Door status. |
|11. | LLR11 | Toggling LEDs anticockwise | All the LEDs are to be toggled in anticlockwise manner. | 
|12. | LLR12 | Printing Door status | Printing the information related to car door status. |
