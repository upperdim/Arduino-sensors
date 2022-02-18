/*
 * Gas (LED)
 */
 
int MQ2 = A0;         // Define MQ2 gas sensor pin at A0
int ledPin = 3;       // Define the buzzer pin at D3
int gasIntensity = 0; // declare variable
const int GAS_TRESHOLD = 450;

void setup() {
  pinMode(MQ2, INPUT);     // MQ2 gas sensor as input
  Serial.begin(9600);      // Set the serial port baud rate to 9600 bps
  pinMode(ledPin, OUTPUT); // Set the digital IO pin mode for output
}

void loop() {
  gasIntensity = analogRead(MQ2); // Read the voltage value of A0 port and assign it to val
  Serial.println(gasIntensity);   // Serial port sends val value
  
  if (gasIntensity > GAS_TRESHOLD) {
    digitalWrite(ledPin, HIGH);
    delay(300);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
