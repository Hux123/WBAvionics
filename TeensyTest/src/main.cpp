#include <Arduino.h>

#include <Arduino.h>

#define FLASH_PIN 13

bool statusHigh = false;

void setup()
{
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