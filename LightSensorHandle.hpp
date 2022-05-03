
#include <iostream>
#include <vector>
#pragma once

#include "Light_sensor.hpp"

typedef Light_sensor T; 

class LightSensorHandle{
private:
    /* data */
    std::vector<T> vec_sensor;
public:
    LightSensorHandle();
    void setSensor(Light_sensor& __name__sensor);
    int responce_sensor();
    void print_vec_sensor();

};
