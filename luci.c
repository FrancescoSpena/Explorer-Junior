

#include "luci.h"

int analogRead(int pin){ return 0; }
int digitalRead(int pin){ return 0; }

int getRead(Luci *sensore){
    return analogRead(sensore->pin) > sensore->soglia ? 1 : 0;
}

void setThreshlod(Luci* sensore, float threshold){
    if(threshold > 0) sensore->soglia = threshold;
}