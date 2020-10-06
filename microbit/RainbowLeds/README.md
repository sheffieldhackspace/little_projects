## Show Red LEDs with Microbit

In this project, you will control five NeoPixels (LEDs) with the A and B buttons on the Microbit.

Button A will turn the five LEDs on showing a different colour for each LED and button B will clear the LEDs and turn them off.

### Equipment:
- Microbit
- 3 x Crocodile clips
- 1 x Neopixel strip (WS2812) with 5 pixels

### Wiring the Microbit:
**There are three crocodile clips for this project which need to be connected to the following Microbit pins**
- 1 connects to ground - **GND**
- 1 connects to pin 0 - **0**
- 1 connects to voltage - **3V**

### Connecting the LEDs:
- The pin connected to GND on the Microbit connects to **GND**
- The pin connected to pin 0 on the Microbit connects to **DATA**
- The pin connected to 3V (voltage) on the Microbit connects to **+5V**

### Connection Table:

| Microbit       | LEDs       |
| ------------- | ------------- |
| GND | GND|
| Pin 0 | DATA |
| 3V | 5V |

**See wiring diagram for more information**

**NOTE** - We suggest using pin 0 as this is what the is reflected in the code. If you want to use a different pin, make sure to change the code on line 4 to which ever pin you choose

Example - If you were using pin 1, the code should show: <br>
<code>np = neopixel.NeoPixel(pin1, 5)</code>

### Changing the colour:
Use the following numbers to change the colours:

- Red (255, 0, 0)
- Blue (0, 0, 255)
- Green (0, 255, 0)
- Purple (255, 0, 255)
- Orange (253, 153, 51)
- Yellow (255, 255, 0)
