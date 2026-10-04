#include "health_analyzer.h"
#include <sstream>

AnalysisResult HealthAnalyzer::analyze(const BiometricData& d) const {
    int critical = 0;
    int warning = 0;

    if (d.heartRate < 45 || d.heartRate > 140) critical++;
    else if (d.heartRate < 55 || d.heartRate > 120) warning++;

    if (d.spo2 < 90) critical++;
    else if (d.spo2 < 94) warning++;

    if (d.temperature < 35.0 || d.temperature > 39.0) critical++;
    else if (d.temperature < 36.0 || d.temperature > 38.0) warning++;

    AnalysisResult r;
    if (critical > 0) {
        r.status = HealthStatus::CRITICAL;
        r.message = "Critical biometric reading detected";
    } else if (warning > 0) {
        r.status = HealthStatus::WARNING;
        r.message = "Warning: biometric value outside preferred range";
    } else {
        r.status = HealthStatus::NORMAL;
        r.message = "All monitored values are within normal project thresholds";
    }
    return r;
}
