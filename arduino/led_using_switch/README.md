# Controlling LED (ON and OFF) using Push button:

A project to switch on and off LED Light using a push button in different patterns.

## Equipments Required:

- 1 x 400 point breadboard
- 1 x **Arduino Nano** *
- 1 x 5mm LED
- 1 x 12mm tactile switch
- 1 x 330 ohm resistor
- 1 x 470 ohm resistor
- 8 x Jumper Wires

*Since not much pins and functionality is required, using Arduino Nano would be enough. If anyone wants to use **Arduino Uno** or any other larger board, then the changes that are needed to be done have also been mentioned while doing connections as well as in the Code. 

## Arduino Nano

The Arduino Nano is a small, complete, and breadboard-friendly board based on the ATmega328 (Arduino Nano 3.x). Its operating voltage is 5V. Power The Arduino Nano can be powered via the Mini-B USB connection. It has 8 Analog Input Pins and 22 Digital I/O pins. It can be programmed using Arduino IDE. To learn more about Arduino Nano follow the link below:  https://store.arduino.cc/usa/arduino-nano

## LED
LED is a semiconductor device that emits light when an electric current is passed through it. 

### Warning:
LED has **polarity**. It has 2 legs:
- The **shorter** of the two legs -> **negative (-)** terminal or **cathode**
- The **longer** leg of the LED -> **positive (+)** terminal or **anode**   

If the polarity gets reversed, the LED will burn out.

The cathode is connected to the ground. Whenever positive voltage is applied to anode, current flows through LED and it glows. A resistor is connected in series with the LED to limit the current through it. Brightness of LED will be proportional to this resistor.

## Tactile Switch
These switches initially remain in the off state. When they are pressed, they allow the current to flow through them and completes the circuit. It has four legs, two on one side and two on the other. Two corresponding legs on the opposite side are internally connected. When the switch is pressed, adjacent legs on the same side gets connected and current flows through the switch. A pull down resistor is connected in series with the switch.

## Connections:

1. Fix all the components on the breadboard such that none of them are connected to each other

2. Connect GND pin of Arduino Nano to bradboard using jumper wire.

3. Connect Anode (+) of LED to the breadboard and connect it to Pin D7 of Arduino Nano using Jumper wire.

   *Any other Digital I/O pin can be used. Just modify the code to use the pin you have connected. Same persists for **Arduino Uno** where you can connect to any Digital I/O pin.

4. Connect Cathod(-) of LED to one end of 330 ohm resistor using jumper wire.

5. Connect the other end of resistor to GND of nano connected on breadboard using jumper wire.

6. Connect one leg of one side of switch to 5V of Arduino nano using jumper wire.

7. Connect one leg on other side of the switch to one end of 470 ohm resistor using jumper wire.

8. Connect the same leg also to the D8 of nano using jumper wire
   
   *Any other Digital I/O Pin can be used both in case of Arduino Uno or Nano

9. Connect other end of the resistor to the GND of nano connected on breadboard.

10. Power the nano using the USB cable.

There we go! We have completed all the connections. Refer to the wiring diagram for better understanding.

## Code:

Code has been provided for 2 cases:

1) Initially the LED is OFF and when the switch is pressed, it will start glowing and remain unchanged even if the switch is pressed again. It can be turned OFF only if the system is switched off or restarts.

2) LED will change its state whenever the switch is pressed. If it is OFF, it will turn ON and if it is ON, it will turn OFF.



