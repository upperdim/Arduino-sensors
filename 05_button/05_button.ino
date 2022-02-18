/*
 * Button
 */

int ledpin    = 5;  // Define the led light in D5
int buttonpin = 4;  // Define the button in D4
int ledState;

void setup () {
  pinMode(ledpin,   OUTPUT);  // The LED light interface is defined as output
  pinMode(buttonpin, INPUT);  // Define the button interface as input
}

void loop () {
  ledState = digitalRead(buttonpin);
  
  if (ledState == LOW) { 
    digitalWrite(ledpin, HIGH);
  } else {
    digitalWrite(ledpin, LOW);
  }
}
