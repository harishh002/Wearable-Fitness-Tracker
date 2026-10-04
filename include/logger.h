#pragma once
#include "sensor.h"
#include "health_analyzer.h"
#include <string>

class Logger {
public:
    explicit Logger(const std::string& filename);
    void write(const BiometricData& data, const AnalysisResult& result);
private:
    std::string filename;
};
