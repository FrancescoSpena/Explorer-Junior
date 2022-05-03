


#pragma once 

typedef struct Luci{
    int pin;
    int value;
    float soglia;
}Luci;


int getRead(Luci *sensore);
void setThreshlod(Luci* sensore, float threshold);
