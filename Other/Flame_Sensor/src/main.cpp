/* Flame Sensor - Analog Output - Test Code */

#include <Arduino.h>


void setup() {
Serial.begin(9600); //baud rate @ 9600
}

void loop() {
int sensorValue = analogRead(A0); // read sensor output value @ A0

Serial.println(sensorValue); // display it on serial monitor
}