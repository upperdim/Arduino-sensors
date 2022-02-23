/*
 * Smoothing
 * Read repeatedly from an analog input, calculate a running average and print it.
 * Keep readig in an array and continually average them.
 */

const int numReadings = 10; // number of samples to take average of
int readings[numReadings];  // readings from the analog input
int readIndex = 0;          // index of the current reading
int total = 0;              // running total
int average = 0;            // declared here to prevent repeated allocation inside the loop

int inputPin = A0;

void setup() {
  Serial.begin(9600);
  
  for (int i = 0; i < numReadings; i++)
    readings[i] = 0;
}

void loop() {
  total -= readings[readIndex];
  readings[readIndex] = analogRead(inputPin);
  total += readings[readIndex];
  readIndex++;

  if (readIndex >= numReadings)
    readIndex = 0;

  average = total / numReadings;
  Serial.println(average);
  delay(5);                 // delay in between reads for stability
}
