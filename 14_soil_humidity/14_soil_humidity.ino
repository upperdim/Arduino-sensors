/*
 * Soil Humidity
 */
 
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

volatile int soilMoisture;
LiquidCrystal_I2C mylcd (0x27,16,2); // set the LCD address to 0x27 for a16 chars and 2 line display

void setup() {
  Serial.begin(9600); // Set the serial port baud rate to 9600
  soilMoisture = 0;
  mylcd.init();
  mylcd.backlight();  // Light up the backlight
  mylcd.clear();      // Clear the screen
  Serial.begin(9600); // Set the serial port baud rate to 9600
  pinMode(A2, INPUT); // Soil sensor is at A2, the mode is input
}

void loop() {
  Serial.print("Soil moisture value:");
  Serial.print("");
  Serial.println(soilMoisture);
  delay(500);
  soilMoisture = analogRead(A2); // Read the value of the soil sensor

  if (soilMoisture < 300) {
    mylcd.clear(); // clear screen
    mylcd.setCursor(0, 0);
    mylcd.print("value:");
    mylcd.setCursor(6, 0);
    mylcd.print(soilMoisture);
    mylcd.setCursor(0, 1);
    mylcd.print("dry soil");
    delay (300);
  } else if ((soilMoisture >= 300) && (soilMoisture <= 700)) {
    mylcd.clear(); //clear screen
    mylcd.setCursor(0, 0);
    mylcd.print("value:");
    mylcd.setCursor(6, 0);
    mylcd.print(soilMoisture);
    mylcd.setCursor(0, 1);
    mylcd.print("humid soil");
    delay (300);
  } else if (soilMoisture > 700) {
    mylcd.clear();//clear screen
    mylcd.setCursor(0, 0);
    mylcd.print("value:");
    mylcd.setCursor(6, 0);
    mylcd.print(soilMoisture);
    mylcd.setCursor(0, 1);
    mylcd.print("in water");
    delay (300);
  }
}
