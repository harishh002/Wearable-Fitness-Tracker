#include "health_analyzer.h"
#include <cassert>
#include <iostream>

int main() {
    HealthAnalyzer analyzer;

    BiometricData normal{75, 98, 36.7, 100, true};
    auto r1 = analyzer.analyze(normal);
    assert(r1.status == HealthStatus::NORMAL);

    BiometricData warning{125, 93, 38.2, 10, false};
    auto r2 = analyzer.analyze(warning);
    assert(r2.status == HealthStatus::WARNING);

    BiometricData critical{160, 85, 40.0, 0, false};
    auto r3 = analyzer.analyze(critical);
    assert(r3.status == HealthStatus::CRITICAL);

    std::cout << "All health analyzer tests passed.\n";
    return 0;
}
