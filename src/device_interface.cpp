#include "device_interface.h"

DeviceInterface::DeviceInterface(SensorSimulator& sensor) : sensor(sensor) {}

BiometricData DeviceInterface::readDevice() {
    // Userspace abstraction of a device-driver boundary.
    return sensor.read();
}
