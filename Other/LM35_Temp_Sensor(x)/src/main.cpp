#include <Arduino.h> 

int led = 9;
int flag = 0;
int sensorValue1 = 0;
int sensorValue2 = 0;
int finalValue = 0;
float temperature = 0.0;
float inputVoltage = 0.0;

void setup() {
  Serial.begin(9600);

  pinMode(led, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop() {

   // Alternate LED on-off, just to show it's working
   if (flag == 1) {
    digitalWrite(led, HIGH);
    flag = 0;
  }
  else {
    digitalWrite(led, LOW);
    flag = 1;
  }
  
  // Average 10 readings of the sensor inputs
  sensorValue1 = 0;
  
  for (int i=0; i<10; i++) {
    sensorValue1 += analogRead(A0);
    sensorValue2 += analogRead(A1);
    finalValue = sensorValue1 - sensorValue2;
    delay (500);
  }

  finalValue /= 10;

  Serial.print ("Sensor value: ");
  Serial.print (finalValue);
  Serial.print (" units | ");

  // Convert ADC input into voltage
  inputVoltage = finalValue * (5.0/1023) * 1000; // input voltage in mV
  
  Serial.print ("Input voltage: ");
  Serial.print (inputVoltage);
  Serial.print (" mV | ");

  // Convert to temperature using LM35 linear relation 
  temperature = inputVoltage / 10;
 
  // Alternative method? Linear relation between temp. and voltage
  // 5 V = 150 oC, 0 V = 2 oC, slope = (150-2)/(5-0) = 29.6 and intercept = 2.0
  // temperature = (29.6 * inputVoltage) + 2;
 
  Serial.print ("Temp.: ");
  Serial.print (temperature);
  Serial.print (" deg.C");

  Serial.println();
}