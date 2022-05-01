
#include <iostream>
#pragma once

#include "Light_sensor.hpp"

class LightSensorHandle{
private:
    /* data */
    Light_sensor& sensor;
public:
    void setSensor(Light_sensor& __name__sensor);
    int responce_sensor();
};
