/*
 * Gas
 */
 
int MQ2 = A0;         // Define MQ2 gas sensor pin at A0
int buzzer = 3;       // Define the buzzer pin at D3
int gasIntensity = 0; // declare variable

void setup() {
  pinMode(MQ2, INPUT);     // MQ2 gas sensor as input
  Serial.begin(9600);      // Set the serial port baud rate to 9600 bps
  pinMode(buzzer, OUTPUT); // Set the digital IO pin mode for output
}

void loop() {
  gasIntensity = analogRead(MQ2); // Read the voltage value of A0 port and assign it to val
  Serial.println(gasIntensity);   // Serial port sends val value
  
  if (gasIntensity > 450) {
    tone(buzzer, 589);
    delay(300);
  } else {
    noTone(buzzer);
  }
}
