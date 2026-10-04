#pragma once
#include "sensor.h"
#include <string>

enum class HealthStatus {
    NORMAL,
    WARNING,
    CRITICAL
};

struct AnalysisResult {
    HealthStatus status;
    std::string message;
};

class HealthAnalyzer {
public:
    AnalysisResult analyze(const BiometricData& data) const;
};
