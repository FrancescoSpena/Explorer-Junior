

#include "LightSensorHandle.hpp"

LightSensorHandle::LightSensorHandle(Light_sensor& __name__sensor) :sensor(__name__sensor){
    this->sensor = __name__sensor;
}

void LightSensorHandle::setSensor(Light_sensor& __name__sensor){
    this->sensor = __name__sensor;
}

int LightSensorHandle::responce_sensor(){
    if(this->sensor.getRead() > this->sensor.getThreshold()) return 0;
    else return -1;
}