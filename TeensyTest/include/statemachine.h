#pragma once

enum FlightStates{
    test = 0,
    state = 1,
    WINTER_CONTINGENCY = 2
};

class FlightState{
    public:
        FlightState();
        void switchState(FlightStates new_state);
        FlightStates getState();
    private:
        FlightStates currentState;
};
