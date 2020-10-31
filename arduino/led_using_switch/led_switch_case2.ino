/*
  Controlling LED using a push button

 LED will change its state whenever the switch is pressed. 
 If it is OFF, it will turn ON and if it is ON, it will turn OFF.

*/

// the setup function runs once when you press reset or power the board

int led = 7;        // Define the pin to which anode of the LED is connected (Any Digital I/O pin of Arduino Nano or Uno can be used)
int switch_pin = 8;     // Define the pin to which switch is connected (Any Digital I/O pin of Arduino Nano or Uno can be used)
bool state = false;     // Determines the state of LED, false -> if LED is OFF and true -> if LED is ON

void setup() {
  // initialize led pin as output and switch pin as input.
  pinMode(led, OUTPUT);
  pinMode(switch_pin, INPUT);

  // initially turn the LED OFF
  digitalWrite(led, LOW);
}

// the loop function runs over and over again forever
void loop() {

  // checks if switch is pressed

  if(digitalRead(switch_pin == HIGH)){

    // if switch is pressed, change the state of the LED and output it to the LED pin
    state = !state;
    digitalWrite(led, state);
    
  }
  
                      
}
