#include "SoundsMusic.h"
#include "ConversionIllum.h"
#include "ConversionTemperature.h"

float darknessCriterion = 0.05;
float temperatureCritarion = 28.0;
bool passwordAttention = false;
int passwordNumber = 5;
int button = 0;
int count = 0;
int flag = 0;
bool done = false;

SoundsMusic music = SoundsMusic(7);
ConversionIllum iilum = ConversionIllum(0);
ConversionTemperature temp = ConversionTemperature(1);


void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);//
  pinMode(13, INPUT);
}

void loop() {
   button = digitalRead(13);
   Serial.print("count:");
   Serial.println(count);
   buttonFlag();
   password(count ,passwordNumber);

   iilum.convertVolt();
   iilum.convertResistance();
   iilum.convertIlluminance();
//   iilum.illumPrint();

   temp.convertVolt();
   temp.convertTemp();
//   temp.tempPrint();

   illuminationHandler(iilum.volt, darknessCriterion, passwordAttention);
   temperatureHandler(temp.temperature, temperatureCritarion);

//   Serial.println("-------------------------------------------");
}

void buttonFlag() {
  if(flag == 0 && button == 1){
    count++;
    flag = 1;
 } else if (flag == 1 && button == 0){
   flag = 0;
 }

}

void password(int input, int password) {
  if(input == password) {
    passwordAttention = true;
  } else {
    passwordAttention = false;
  }
}

void illuminationHandler (float illuminance, float criterion, bool flag) {
  if (illuminance < criterion) {
     Serial.println("Dark");
     done = false;
   } else if(flag == false && illuminance > criterion && done == true) {
     Serial.println("Success");
   } else if (illuminance > criterion && flag == false) {
     Serial.println("Light");
     music.falseBuzzer();
   } else if (illuminance > criterion && flag == true){
     Serial.println("Light");
     music.dragonQuest();
     done = true;
     passwordAttention = false;
     count=0;
   }
}

void temperatureHandler (float temperature, float criterion) {
  if (temperature < criterion) {
    Serial.println("LOW temperature");
    
  } else {
    Serial.print("HIGH temperature : ");
    Serial.println(temperature);
//    music.falseBuzzer();
  }
}
