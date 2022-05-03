
#pragma once

class Light_sensor{
private:
    /* data */
    int analog_pin;
    float threshold;
    float read_value;
public:
    Light_sensor(int __analog_pin, float __threshold__sensor);
    float getThreshold();
    void setThreshold(float __new_threshold__sensor);
    float getRead();
    int getPin(){
        return this->analog_pin;
    }
};
