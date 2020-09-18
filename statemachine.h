
#include <Arduino.h>
#include <analog_in.h>
#include <PWM_out.h>
#include <digital_in.h>
#include <digital_out.h>
#include <debounce.h>

class stateMachine{

    public:
    stateMachine(bool led);
    void step();
    void stop();
    void readData();
    void writeData();

    private:
    char state;
    bool ledUsed;
    Analog_in testInput; //Analog input á A5 (5)
    Digital_in buttonInput; //Button input on pin 12 (PB4) with ISR set on true. (0, false);
    PWM_out ledTimer;


};