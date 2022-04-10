#include "Arduino.h"
#include "ConversionIllum.h"

ConversionIllum::ConversionIllum(int pin) {
  pinNumber = pin;
}

void ConversionIllum::convertVolt(void) {
   value = analogRead(pinNumber);
   volt = (float)value / 1023.0 * 5.0;
}

void ConversionIllum::convertResistance(void) {
    resistance = fixed * volt / (5.0 - volt);
}

void ConversionIllum::convertIlluminance(void) {
    illuminance = 1000.0 * pow(resistance / 1000.0, -1.67);
}

void ConversionIllum::illumPrint(void) {
  Serial.print(volt);
  Serial.println(" volt");

  Serial.print(resistance);
  Serial.println(" ohm");
   
  Serial.print(illuminance);
  Serial.println(" lx");
  Serial.println(" ");
}
