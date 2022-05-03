
#include <iostream>
#include <vector>
#pragma once

#include "Light_sensor.hpp"

class LightSensorHandle{
private:
    /* data */
    Light_sensor* vec_sensor;
    int i;
public:
    LightSensorHandle();
    void setSensor(Light_sensor& __name__sensor);
    int responce_sensor();
    void print_vec_sensor();
};
