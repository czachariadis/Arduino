#include <Arduino.h>

const int lightPin = 0;
const int latchPin = 11;
const int clockPin = 9;
const int dataPin = 12;

int leds = 0;

void setup() 
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
}
void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, MSBFIRST, leds); // change to LSBFIRST if you want to start from the right
   digitalWrite(latchPin, HIGH);
}
void loop() 
{
  int reading  = analogRead(lightPin);
  int numLEDSLit = reading / 57; // 1023 / 8 = 127.875, divide by 57 to get extra sensitivity for low lights
  if (numLEDSLit > 8) numLEDSLit = 8;
  leds = 0; 
  for (int i = 0; i < numLEDSLit; i++)
  {
    leds = leds + (1 << i); 
  }
  updateShiftRegister();
}
