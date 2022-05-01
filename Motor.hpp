
#pragma once

class Motor{
private:
    /* data */
    int pin_dirA;
    int pin_dirB;
    int pin_pwm;
public:
    Motor(int pin__dirA, int pin__dirB, int pin__pwm);
    int getPinDirA();
    int getPinDirB();
    int getPinPWM();
};
