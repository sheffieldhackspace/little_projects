//Define where PIN is the LED connected
const int ledPIN = 9;
 
 /*
    - In this funcion we can initialize variables, pin modes, start using libraries, etc
    - Only run once, after each powerup or reset of the Arduino board.
*/
void setup() {
  pinMode(ledPIN , OUTPUT);  //Define PIN like OUTPUT
}
 
 /*
    - This function loops consecutively, allowing your program to change and respond. Use it to actively control the Arduino board.
 */
void loop(){
  digitalWrite(ledPIN , HIGH);   // Set Pin to HIGH for turn on the LED
  delay(1000);                   // Wait 1000 miliseconds (1 second)
  digitalWrite(ledPIN , LOW);    // Set Pin to HIGH for turn off the LED
  delay(1000);                   // Wait 1000 miliseconds (1 second)
}

/*
  The code in the loop function will repeat indefinitely
  by turning the LED off and on, which produces the blink effect.
*/