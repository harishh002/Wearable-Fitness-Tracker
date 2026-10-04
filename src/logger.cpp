#include "logger.h"
#include <fstream>
#include <iomanip>
#include <filesystem>

Logger::Logger(const std::string& filename) : filename(filename) {
    if (!std::filesystem::exists(filename)) {
        std::ofstream out(filename);
        out << "heart_rate,spo2,temperature,steps,moving,status,message\n";
    }
}

void Logger::write(const BiometricData& d, const AnalysisResult& r) {
    std::ofstream out(filename, std::ios::app);
    std::string status;
    switch (r.status) {
        case HealthStatus::NORMAL: status = "NORMAL"; break;
        case HealthStatus::WARNING: status = "WARNING"; break;
        case HealthStatus::CRITICAL: status = "CRITICAL"; break;
    }
    out << d.heartRate << ","
        << d.spo2 << ","
        << std::fixed << std::setprecision(2) << d.temperature << ","
        << d.steps << ","
        << (d.moving ? 1 : 0) << ","
        << status << ","
        << r.message << "\n";
}
