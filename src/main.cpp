#include "health_analyzer.h"
#include "logger.h"
#include "pipeline.h"

#include <csignal>
#include <iostream>
#include <limits>

volatile std::sig_atomic_t stopRequested = 0;

void handleSignal(int)
{
    stopRequested = 1;
}

int main()
{
    std::signal(SIGINT, handleSignal);
    std::signal(SIGTERM, handleSignal);

    // Logger requires a filename
    Logger logger("biometric_data.csv");

    std::cout << "=====================================\n";
    std::cout << "   WEARABLE FITNESS TRACKER\n";
    std::cout << "   Virtual Biometric Data Pipeline\n";
    std::cout << "=====================================\n";

    while (!stopRequested)
    {
        std::cout << "\nChoose input mode:\n";
        std::cout << "1. Enter biometric values manually\n";
        std::cout << "2. Run automatic sensor simulation\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter choice: ";

        int choice;

        if (!(std::cin >> choice))
        {
            std::cin.clear();
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            std::cout << "Invalid input.\n";
            continue;
        }

        if (choice == 3)
        {
            break;
        }

        if (choice == 2)
        {
            std::cout << "\nStarting automatic sensor simulation...\n";

            runPipelineDemo();

            std::cout << "\nPress ENTER to continue...";
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );
            std::cin.get();

            continue;
        }

        if (choice != 1)
        {
            std::cout << "Please enter 1, 2 or 3.\n";
            continue;
        }

        // Manual biometric data
        BiometricData data;

        std::cout << "\nEnter Biometric Information\n";
        std::cout << "-----------------------------\n";

        std::cout << "Enter Heart Rate (bpm): ";
        std::cin >> data.heartRate;

        std::cout << "Enter SpO2 (%): ";
        std::cin >> data.spo2;

        std::cout << "Enter Temperature (C): ";
        std::cin >> data.temperature;

        std::cout << "Enter Steps: ";
        std::cin >> data.steps;

        int moving;

        std::cout << "Is the person moving? (1=Yes, 0=No): ";
        std::cin >> moving;

        data.moving = (moving == 1);

        // Analyze data
        HealthAnalyzer analyzer;
        AnalysisResult result = analyzer.analyze(data);

        std::cout << "\n=============================\n";
        std::cout << "       ANALYSIS RESULT\n";
        std::cout << "=============================\n";

        std::cout << "Heart Rate : "
                  << data.heartRate << " bpm\n";

        std::cout << "SpO2       : "
                  << data.spo2 << " %\n";

        std::cout << "Temperature: "
                  << data.temperature << " C\n";

        std::cout << "Steps      : "
                  << data.steps << "\n";

        std::cout << "Moving     : "
                  << (data.moving ? "YES" : "NO") << "\n";

        std::cout << "Status     : "
                  << static_cast<int>(result.status) << "\n";

        std::cout << "Message    : "
                  << result.message << "\n";

        std::cout << "=============================\n";

        std::cout << "\nPress ENTER to continue...";

        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(),
            '\n'
        );
        std::cin.get();
    }

    std::cout << "\nPipeline stopped gracefully.\n";

    return 0;
}