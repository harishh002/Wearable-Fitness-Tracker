# Wearable Fitness Tracker
### Linux-Based Virtual Biometric Data Pipeline

**Capstone Project – Module 9**

## 1. Project Information

- **Project Type:** Individual Project
- **Programming Language:** C++17
- **Operating System:** Ubuntu Linux (WSL2 development environment)
- **Build Tool:** GNU Make
- **Compiler:** GNU G++
- **Version Control:** Git and GitHub

## 2. Project Overview

The Wearable Fitness Tracker is a Linux-based virtual biometric monitoring system developed using C++17. The project simulates wearable sensors to generate biometric readings such as heart rate, blood oxygen saturation (SpO2), body temperature, step count, and physical activity.

The system collects sensor data, validates readings, performs health-status analysis, detects abnormal values, and stores the results in a CSV log file.

The project demonstrates modular software architecture, Linux system programming, POSIX process management, inter-process communication, file handling, and device-interface abstraction.

## 3. Problem Statement

Wearable fitness devices continuously generate biometric information that requires collection, processing, monitoring, and storage.

This project provides a software-based prototype that simulates this process without requiring physical wearable hardware.

## 4. Project Objectives

- Simulate biometric sensor readings.
- Develop a modular C++ application.
- Implement data validation and health analysis.
- Demonstrate Linux/POSIX system programming.
- Implement process communication using fork and pipe.
- Store biometric information in CSV format.
- Display health status through a console dashboard.

## 5. Technologies Used

| Technology | Purpose |
|---|---|
| C++17 | Application development |
| Linux | Development and execution environment |
| GNU G++ | Compilation |
| POSIX APIs | Process and system programming |
| fork() | Process creation |
| pipe() | Inter-process communication |
| Make | Build automation |
| Git/GitHub | Version control and submission |
| CSV | Data logging |

## 6. Main Features

1. Virtual biometric sensor simulation.
2. Device-interface abstraction.
3. Data validation.
4. Health threshold detection.
5. Console-based monitoring dashboard.
6. CSV data logging.
7. POSIX signal handling.
8. Producer-consumer process communication.
9. Graceful application shutdown.
10. Modular and testable design.

## 7. System Architecture

The application follows this processing pipeline:

Virtual Sensor → Device Interface → Data Validation → Health Analyzer → Data Logger → Console Dashboard

A separate process communication demonstration uses:

Producer Process → POSIX Pipe → Consumer Process

## 8. Project Structure

```text
Wearable_Fitness_Tracker_Project/
│
├── bin/                 Compiled executable
├── docs/                Project documentation and UML
├── include/             Header files
├── scripts/             Helper scripts
├── src/                 C++ source files
├── tests/               Test files
├── biometric_data.csv   Biometric log data
├── Makefile             Build configuration
└── README.md            Project documentation
```

## 9. Requirements

- Ubuntu Linux or compatible Linux environment
- GNU G++ supporting C++17
- GNU Make
- Git

## 10. Installation and Execution

### Step 1: Clone the repository

```bash
git clone https://github.com/harishh002/Wearable-Fitness-Tracker.git
```

### Step 2: Enter the project directory

```bash
cd Wearable-Fitness-Tracker
```

### Step 3: Compile

```bash
make
```

### Step 4: Run

```bash
./bin/fitness_tracker
```

### Step 5: Run tests

```bash
make test
```

### Step 6: Clean generated build files

```bash
make clean
```

## 11. Linux Device Driver Scope

The current implementation uses a user-space DeviceInterface abstraction to represent the boundary between the application and a wearable device.

The project demonstrates device-interface design and Linux system programming concepts.

An actual Linux kernel character device driver is not included in the current implementation.

## 12. Expected Output

```text
Heart Rate : 78 bpm
SpO2       : 98 %
Temperature: 36.7 C
Steps      : 1240
Status     : NORMAL
Message    : Biometric readings within configured limits
```

The system generates alerts when simulated readings cross configured thresholds.

## 13. Testing

The project can be tested for:

- Successful compilation.
- Sensor data generation.
- Data validation.
- Health-status classification.
- CSV file generation.
- Process communication.
- Graceful shutdown.

## 14. Limitations

- Sensor readings are simulated.
- Physical wearable hardware is not connected.
- The current version does not implement a Linux kernel module.
- Health analysis is intended for academic demonstration and is not a medical diagnostic system.

## 15. Future Enhancements

- Linux kernel character device driver.
- Real wearable sensor integration.
- Bluetooth communication.
- SQLite database integration.
- Graphical monitoring dashboard.
- Long-term biometric analytics.

## 16. Conclusion

The Wearable Fitness Tracker demonstrates how C++ and Linux system programming concepts can be used to design a modular biometric data-processing pipeline.

The project provides a foundation for future development involving Linux device drivers, embedded systems, and real-time wearable monitoring.

## Author

**Harish Chandra Mohapatra**

**GitHub:** https://github.com/harishh002/Wearable-Fitness-Tracker
