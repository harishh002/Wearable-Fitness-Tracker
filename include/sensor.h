#pragma once
#include <random>

struct BiometricData {
    int heartRate;
    int spo2;
    double temperature;
    int steps;
    bool moving;
};

class SensorSimulator {
public:
    SensorSimulator();
    BiometricData read();
private:
    std::mt19937 rng;
    std::uniform_int_distribution<int> heartRateDist;
    std::uniform_int_distribution<int> spo2Dist;
    std::uniform_real_distribution<double> temperatureDist;
    std::uniform_int_distribution<int> stepDist;
    std::bernoulli_distribution movingDist;
};
