
#include <iostream>

#include "Light_sensor.hpp"

class LightSensorHandle{
private:
    /* data */
    Light_sensor& sensor;
public:
    LightSensorHandle(Light_sensor& __name__sensor);
    int responce_sensor();
};
