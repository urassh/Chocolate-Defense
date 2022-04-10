#include "Arduino.h"
#include "SoundsMusic.h"

SoundsMusic::SoundsMusic(int pin) {
  pinNumber = pin;
  pinMode(pinNumber, OUTPUT);
}

void SoundsMusic::shortMusic(void) {
  tone(pinNumber,so2,200);
  delay(150);
  tone(pinNumber,ra2,200);
  delay(150);
  tone(pinNumber,si2,200);
  delay(150);
  tone(pinNumber,do3,200);
  delay(300);
  tone(pinNumber,so2,200);
  delay(150);
  tone(pinNumber,do3,200);
  delay(2000);
}

void SoundsMusic::charumera(void) {
  tone(pinNumber,fa3,150);
  delay(150);
  tone(pinNumber,so3,150);
  delay(150);
  tone(pinNumber,ra3,1000);
  delay(500);
  tone(pinNumber,so3,150);
  delay(150);
  tone(pinNumber,fa3,1000);
  delay(500);
  tone(pinNumber,fa3,300);
  delay(200);
  tone(pinNumber,so3,300);
  delay(150);
  tone(pinNumber,ra3,150);
  delay(150);
  tone(pinNumber,so3,150);
  delay(150);
  tone(pinNumber,fa3,200);
  delay(200);
  tone(pinNumber,so3,800);
  delay(2000);
}

void SoundsMusic::oneUp(void) {
  tone(pinNumber,si2,100);
  delay(100);
  tone(pinNumber,mi3,100);
  delay(100);
  tone(pinNumber,si2,100);
  delay(100);
  tone(pinNumber,mi3,100);
  delay(100);
  tone(pinNumber,si2,90);
  delay(90);
  tone(pinNumber,mi3,75);
  delay(75);
  tone(pinNumber,si2,60);
  delay(60);
  tone(pinNumber,mi3,50);
  delay(50);
  tone(pinNumber,si2,50);
  delay(50);
  tone(pinNumber,mi3,60);
  delay(400);
  tone(pinNumber,mi2,150);
  delay(150);
  tone(pinNumber,do3,150);
  delay(150);
  tone(pinNumber,mi3,150);
  delay(150);
  tone(pinNumber,do3,150);
  delay(150);
  tone(pinNumber,re3,150);
  delay(150);
  tone(pinNumber,so3,200);
  delay(2000);
}

void SoundsMusic::dragonQuest(void) {
  tone(pinNumber,fa3,120);
  delay(120);
  tone(pinNumber,fa3,120);
  delay(120);
  tone(pinNumber,fa3,120);
  delay(120);
  tone(pinNumber,fa3,120);
  delay(400);
  tone(pinNumber,re32,150);
  delay(280);
  tone(pinNumber,so3,150);
  delay(300);
  tone(pinNumber,fa3,800);
  delay(2000);
}

void SoundsMusic::falseBuzzer(void) {
  tone(pinNumber,do3,100);
  delay(100);
  tone(pinNumber,do3,100);
  delay(100);
  tone(pinNumber,do3,100);
  delay(100);
  tone(pinNumber,do3,100);
  delay(100);
  tone(pinNumber,do3,1000);
  
}
