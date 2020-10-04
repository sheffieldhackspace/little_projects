from microbit import *
import neopixel

np = neopixel.NeoPixel(pin0, 5)

while True:
    red = (255, 0, 0)

    if button_a.is_pressed():
        for led in range(0, 5):
            np[led] = red
            np.show()

    if button_b.is_pressed():
        np.clear()
        np.show()
