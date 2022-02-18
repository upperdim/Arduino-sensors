/*
 * Fan
 */

void setup () {
   pinMode(7, OUTPUT); //define D7 pin as output
   pinMode(6, OUTPUT); //define D6 pin as output
}

void loop () {
   digitalWrite(7, LOW);
   digitalWrite(6, HIGH); // Reverse rotation of the motor
   delay(3000);
   digitalWrite(7, LOW);
   digitalWrite(6, LOW); // The motor stops rotating
   delay(1000);
   digitalWrite(7, HIGH);
   digitalWrite(6, LOW); // The motor rotates in the forward direction
   delay(3000);
}
