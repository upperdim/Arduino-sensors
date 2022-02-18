/*
 * Steam
 */
 
void setup() {
  Serial.begin(9600); // open serial port and set baud rate at 9600 bps
}

void loop() {
  int vaporIntensity = analogRead(3); // plug vapor sensor into analog port 3
  Serial.print("Moisture is ");
  Serial.println(vaporIntensity, DEC);
  delay(100);
}
