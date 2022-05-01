

#include "LightSensorHandle.hpp"



int LightSensorHandle::responce_sensor(){
    if(this->sensor.getRead() < this->sensor.threshold) return 0;
    else return -1;
}