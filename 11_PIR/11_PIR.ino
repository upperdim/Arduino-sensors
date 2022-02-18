/*
 * PIR
 */

void setup() {
   Serial.begin(9600);  // open serial port, and set baud rate at 9600 bps
   pinMode(2, INPUT);   // Define PIR as input in D2
   Serial.begin(9600);
   pinMode(13, OUTPUT); // Define LED as output in D13
   pinMode(7, OUTPUT);  // Define D7 as output
   pinMode(6, OUTPUT);  // Define D6 as output
}

void loop() {
  Serial.println( digitalRead(2) );
  delay(250);
  
  // If motion is detected
  if (digitalRead(2) == 1) {
     digitalWrite(13, HIGH); // LED light is on
     digitalWrite(7, HIGH);
     analogWrite(6,150); // Fan rotates
  } else {
    digitalWrite(13, LOW); // LED light is off
    digitalWrite(7, LOW);
    analogWrite(6,0); // The fan does not rotate
  }
}
 
