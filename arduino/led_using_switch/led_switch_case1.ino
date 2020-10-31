/*
  Controlling LED using a push button

  Initially the LED is OFF and when the switch is pressed, 
  it will start glowing and turn off when the switch is released

*/

// the setup function runs once when you press reset or power the board

int led = 7;        // Define the pin to which anode of the LED is connected (Any Digital I/O pin of Arduino Nano or Uno can be used)
int switch_pin = 8;     // Define the pin to which switch is connected (Any Digital I/O pin of Arduino Nano or Uno can be used)

void setup() {
  // initialize led pin as output and switch pin as input.
  pinMode(led, OUTPUT);
  pinMode(switch_pin, INPUT);

  // initially turn the LED OFF
  digitalWrite(led, LOW);
}

// the loop function runs over and over again forever
void loop() {

  // checks if switch has been pressed
  if (digitalRead(switch_pin) == HIGH){

    digitalWrite(led, HIGH);      //if switch is pressed, LED is turned ON
    
  }
  
  else
  {
    digitalWrite(led,LOW); //if switch is released, LED is turned OFF
  }
                      
}
