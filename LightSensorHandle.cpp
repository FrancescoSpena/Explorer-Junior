

#include "LightSensorHandle.hpp"



void LightSensorHandle::setSensor(Light_sensor& __name__sensor){
    this->sensor = __name__sensor;
}

int LightSensorHandle::responce_sensor(){
    if(this->sensor.getRead() > this->sensor.threshold) return 0;
    else return -1;
}