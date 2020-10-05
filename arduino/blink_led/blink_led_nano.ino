const int LED = 13;    // connected LED on Digital OUTPUT Pin no. 13, named it as LED.

void setup()    // setup function that runs once as soon as the program starts running.
{                
    pinMode(LED, OUTPUT);    // defining LED pin for OUTPUT.
}

void loop()    // keeps running (or until a condition is met). It actively controls the Arduino board.
{
    digitalWrite(LED, HIGH);   // turns LED ON
    delay(1000);               // stays ON for a second
    digitalWrite(LED, LOW);    // turns LED OFF
    delay(1000);               // stays OFF for a second(1000 ms)
}
