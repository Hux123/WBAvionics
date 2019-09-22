#include <Arduino.h>

#define FLASH_PIN PB4

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

  while(millis()-startTime < 10){
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

  



 // turn the LED on (HIGH is the voltage level)
 digitalWrite(FLASH_PIN, HIGH);

 //wait for a second 
 delay(1000);

 // turn the LED off by making the voltage LOW
 digitalWrite(FLASH_PIN, LOW);

  // wait for a second
 delay(1000);
}
