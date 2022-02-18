/*
 * Pulse Width Modulation (PWM)
 */

int ledPin = 5; // Define the LED pin at D5

void setup () {
  pinMode(ledPin, OUTPUT); // initialize ledpin as an output
} 

void loop () {
  // LED lights gradually light up
  for (int i = 0; i < 255; i++) {
    analogWrite(ledPin, i);
    delay(5);
  } 
  
  // LED gradually goes out
  for (int i = 255; i > 0; i--) {
    analogWrite(ledPin, i); 
    delay(5);
  }
}
