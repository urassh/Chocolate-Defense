#include "Arduino.h"
#include "ConversionTemperature.h"

ConversionTemperature::ConversionTemperature(int pin) {
  pinNumber = pin;
}

void ConversionTemperature::convertVolt(void) {
  value = analogRead(pinNumber);
  volt = (float)value / 1023.0 * 5.0;
}

void ConversionTemperature::convertTemp() {
  temperature = volt * 100.0 - 60.0;
}

void ConversionTemperature::tempPrint() {
  Serial.print("Volt : ");
  Serial.println(volt);
  Serial.print("temperature : ");
  Serial.println(temperature);
  Serial.println("-------------------------------------------");
}
