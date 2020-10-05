const int LED = 13;    // connected LED on Pin 13, named Pin 13 as LED

void setup() 
{                
    pinMode(LED, OUTPUT);    // defineing LED pin as O/P Pin.   
}

void loop()
{
    digitalWrite(LED, HIGH);   // turns LED ON
    delay(1000);               // stays ON for a second
    digitalWrite(LED, LOW);    // turns LED OFF
    delay(1000);               // stays OFF for a second(1000 ms)
}
