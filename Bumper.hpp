

#pragma once

class Bumper{
private:
    /* data */
    int pin;
    int read_value_digital;
    float read_value_analog;
    //mod = 0 digital use, mod = 1 analog use
    bool mod;
public:
    //mod = 0 digital use, mod = 1 analog use
    Bumper(int pin, bool __mod);
    int getRead();
};

