
#include "Bumper.hpp"

int digitalRead(int pin){ return 0;} //Only for compile
float analogRead(int pin){ return 0.f;} //Only for compile

Bumper::Bumper(int __pin, bool __mod){ 
    this->pin = __pin; 
    this->mod = __mod;
    this->read_value_analog = 0.f;
    this->read_value_digital = 0;
    return;
}

int Bumper::getRead(){
    return this->mod == 0 ? this->read_value_digital = digitalRead(this->pin) : this->read_value_analog = (this->pin);
}