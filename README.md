## Abstract 
In this project, a LED is interfaced with Arduino Uno to blink ‘N’ number of times and display the value of ‘N’ in Serial monitor when the button is pressed.

## Hardware Components

- Arduino Uno
- Button
- LED

## Development Tools Used:

- PROTEUS 8 - for simulation
- Arduino - for programming

## Hardware Connection

- D3 of Arduino Uno is connected to Button 1
- D2 of Arduino Uno is connected to Button 2
- D13 of Arduino Uno is connected to the LED

## Usage:
- Download the schematic.pdsprj file->open in PROTEUS 8 tool.

<img src=https://user-images.githubusercontent.com/84024571/135745633-272042f2-7008-4aa8-931a-ad5934dba937.PNG width="800" height="400">
- Download code. ino and open in the Arduino tool.
- Go to tools ->select Board->select Arduino UNO.
- Click on “Verify” button and copy the generated hex file path from Arduino as described in this link
  https://www.instructables.com/HOW-TO-GET-HEX-FILE-FROM-ARDUINO-/
- Go to PROTEUS 8->Click on Arduino Uno->Edit Component window will pop up ->paste the hex file path in         Program file->Click OK.

<img src=https://user-images.githubusercontent.com/84024571/132992989-2161269d-0baf-4f56-9f3c-890b1d71bbe5.PNG width="800" height="400">

- Click on the Run button.

## Output:
<img src=https://user-images.githubusercontent.com/84024571/135745715-9f14efaf-b64e-4025-a046-facdbd536763.PNG width="800" height="400">
