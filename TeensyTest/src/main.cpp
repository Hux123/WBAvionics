#include <Arduino.h>
#include "statemachine.h"

//To avoid multiple definitions of setup() and loop()
#ifndef UNIT_TEST

#define FLASH_PIN 13

bool statusHigh = false;

void setup()
{
  Serial.begin(9600);
  delay(2000); //give time for serial to start

 // initialize LED digital pin as an output.
  pinMode(FLASH_PIN, OUTPUT);
  digitalWrite(FLASH_PIN,LOW);
}

void loop()
{
  int startTime = millis();

  while(millis()-startTime < 250){
    //loop
  }

  if(statusHigh){
    digitalWrite(FLASH_PIN,LOW);
    statusHigh = false;
  }
  else{
    digitalWrite(FLASH_PIN,HIGH);
    statusHigh = true;
  }
}

#endif