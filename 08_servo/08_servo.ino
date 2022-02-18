/*
 * Servo
 */

#include <Servo.h> // Servo function library

Servo myservo;

void setup () {
  myservo.attach(9); // Define the position of the servo on D9
}

void loop () {
  for (int angle = 0; angle < 180; angle++) {
    myservo.write(angle); // angle of the servo
    delay(15);
  }

  for (int angle = 180; angle >= 1; angle--) {
    myservo.write(angle); // angle of the servo
    delay(15);
  }
}
