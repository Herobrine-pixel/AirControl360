#ifndef AIRCONTROL360_H
#define AIRCONTROL360_H

#include <Arduino.h>
#include <Wire.h>

class AirControl360 {
public:
    void begin();
    void update();

    bool swipeLeft();
    bool swipeRight();
    bool push();
    bool pull();

private:
    int16_t ax, ay, az;
    int16_t prevAx, prevAy, prevAz;

    void readMPU();
};

#endif
