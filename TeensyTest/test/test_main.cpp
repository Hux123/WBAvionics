#include <Arduino.h>
#include <unity.h>
#include "statemachine.h"

//Write "platformio test -e uno --verbose" to test in new terminal

//Create state object
FlightState flightState;

void testStateChange(void){
    FlightStates nextState = state;
    flightState.switchState(nextState);
    FlightStates testState = flightState.getState();
    TEST_ASSERT_EQUAL(testState,nextState);
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);

    UNITY_BEGIN();    // IMPORTANT LINE!
}

void loop() {
    //RUN_TEST(testAddOne);
    delay(500);
    RUN_TEST(testStateChange);
    UNITY_END();
}