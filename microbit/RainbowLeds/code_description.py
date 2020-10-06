from microbit import *
import neopixel

np = neopixel.NeoPixel(pin0, 5)

while True:
    if button_a.is_pressed():
        # Set the first LED to blue
        np[0] = (0, 0, 255)
        # Set the second LED to purple
        np[1] = (255, 0, 255)
        # Set the third LED to orange
        np[2] = (253, 153, 51)
        # Set the fourth LED to yellow
        np[3] = (255, 255, 0)
        # Set the fifth LED to green
        np[4] = (0, 255, 0)
        np.show()

    if button_b.is_pressed():
        np.clear()
        np.show()
