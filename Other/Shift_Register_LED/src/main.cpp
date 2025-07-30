#include <Arduino.h>

int latchPin = 5; // to pin 12
int clockPin = 6; // to pin 11
int dataPin = 4;  // to pin 14

byte leds = 0;
int pattern[] = {1, 2, 4, 8, 16, 32, 64, 128, 64, 32, 16, 8, 4, 2};

void updateShiftRegister()
{
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, leds);
    digitalWrite(latchPin, HIGH);
}

void setup()
{
    pinMode(latchPin, OUTPUT);
    pinMode(dataPin, OUTPUT);
    pinMode(clockPin, OUTPUT);
}

void loop()
{

    for (int i = 0; i < 14; i++)
    {
        leds = pattern[i];
        updateShiftRegister();
        delay(500);
    }
}
