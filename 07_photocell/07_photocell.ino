/*
 * Photocell
 */

int LED = 5;            // Set LED pin at D5
int lightIntensity = 0; // Voltage value of the photodiode

void setup () {
  pinMode(LED, OUTPUT); // LED is output
  Serial.begin(9600);   // The serial port baud rate is set to 9600
}

void loop() {
  lightIntensity = analogRead(A1); // Read the voltage value of A1 Pin
  
  Serial.println(lightIntensity);  // Serial port to view the change of voltage value
  
  if (lightIntensity < 900) {
    digitalWrite(LED, LOW);        // Less than 900, LED light is off
  } else {
    digitalWrite(LED, HIGH);       // Otherwise, the LED lights up
  }
  
  delay(10);
} 
