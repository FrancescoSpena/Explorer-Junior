

#include "Motor.h"


Motor::Motor(int pin__dirA, int pin__dirB, int pin__pwm){
    this->pin_dirA = pin__dirA;
    this->pin_dirB = pin__dirB;
    this->pin_pwm = pin__pwm;
    return;
}

int Motor::getPinDirA(){ return this->pin_dirA; }

int Motor::getPinDirB(){ return this->pin_dirB; }

int Motor::getPinPWM(){ return this->pin_pwm; }