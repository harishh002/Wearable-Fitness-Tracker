#pragma once
#include "sensor.h"

class DeviceInterface {
public:
    explicit DeviceInterface(SensorSimulator& sensor);
    BiometricData readDevice();
private:
    SensorSimulator& sensor;
};
