

#include "Light_sensor.hpp"
#include "Compilation.hpp"


Light_sensor::Light_sensor(int __analog_pin, float __threshold__sensor){
    this->analog_pin = __analog_pin;
    if(__threshold__sensor > 0) this->threshold = __threshold__sensor;
    return;
}

float Light_sensor::getThreshold(){ return this->threshold; }

void Light_sensor::setThreshold(float __new_threshold__sensor){
    if(__new_threshold__sensor > 0) this->threshold = __new_threshold__sensor;
}

float Light_sensor::getRead(){
    return analogRead(this->analog_pin);
}