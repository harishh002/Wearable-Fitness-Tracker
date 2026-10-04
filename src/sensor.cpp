#include "sensor.h"

SensorSimulator::SensorSimulator()
    : rng(std::random_device{}()),
      heartRateDist(55, 125),
      spo2Dist(90, 100),
      temperatureDist(35.8, 38.0),
      stepDist(0, 30),
      movingDist(0.5) {}

BiometricData SensorSimulator::read() {
    BiometricData d;
    d.heartRate = heartRateDist(rng);
    d.spo2 = spo2Dist(rng);
    d.temperature = temperatureDist(rng);
    d.steps = stepDist(rng);
    d.moving = movingDist(rng);
    return d;
}
