/*
 * Blink
 */

void setup() {
  pinMode(13, OUTPUT); // initialize digital pin 13 as an output.
}

void loop() {
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for this many ms
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  delay(3000);             // wait for this many ms
}
