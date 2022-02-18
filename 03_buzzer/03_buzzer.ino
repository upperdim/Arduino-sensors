/*
 * Buzzer
 */

int tonepin = 3; // Set the pin of the buzzer to the digital D3

int delay1 = 1;  // ms
int delay2 = 2;  // ms

void setup () {
  pinMode(tonepin, OUTPUT);  // Set the digital IO pin mode to output
} 

void loop () {
  // output a frequency sound
  for (int i = 0; i < 80; i++) {
    digitalWrite(tonepin, HIGH); // Sound
    delay(delay1);                 
    digitalWrite(tonepin, LOW);  // No sound
    delay(delay1);                   
  } 

  // output sound of another frequency
  for (int i = 0; i < 100; i++) { 
    digitalWrite(tonepin, HIGH); // Sound
    delay(delay2);                    
    digitalWrite(tonepin, LOW);  // No sound
    delay(delay2);                    
  }
}
