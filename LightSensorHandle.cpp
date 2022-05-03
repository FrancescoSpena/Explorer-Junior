

#include "LightSensorHandle.hpp"

LightSensorHandle::LightSensorHandle(){
    this->i = 0;
    return;
}

void LightSensorHandle::setSensor(Light_sensor& __name__sensor){
    this->vec_sensor[this->i++] = __name__sensor;
    return;
}

void LightSensorHandle::print_vec_sensor(){
    for(int i=0; i < this->i; ++i){
        std::cout<< "pin = %d\t threshold = %f" << this->vec_sensor[i].getPin() << this->vec_sensor[i].getThreshold() << std::endl;
    }
}

int LightSensorHandle::responce_sensor(){
    return 0;
}