#include "AirControl360.h"

#define MPU_ADDR 0x68

void AirControl360::begin() {
    Wire.begin();
    Wire.beginTransmission(MPU_ADDR);
    Wire.write(0x6B);
    Wire.write(0);
    Wire.endTransmission(true);
}

void AirControl360::readMPU() {
    prevAx = ax;
    prevAy = ay;
    prevAz = az;

    Wire.beginTransmission(MPU_ADDR);
    Wire.write(0x3B);
    Wire.endTransmission(false);
    Wire.requestFrom(MPU_ADDR, 6, true);

    ax = Wire.read() << 8 | Wire.read();
    ay = Wire.read() << 8 | Wire.read();
    az = Wire.read() << 8 | Wire.read();
}

void AirControl360::update() {
    readMPU();
}

bool AirControl360::swipeLeft() {
    return (prevAx - ax) > 8000;
}

bool AirControl360::swipeRight() {
    return (ax - prevAx) > 8000;
}

bool AirControl360::push() {
    return (az - prevAz) > 8000;
}

bool AirControl360::pull() {
    return (prevAz - az) > 8000;
}
