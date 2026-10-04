# Wearable Fitness Tracker – Virtual Biometric Data Pipeline

## Project Type
Individual Project – Linux, Device Drivers, System Programming & C++

## Technology
- C++17
- Linux / GNU g++
- POSIX system programming concepts
- Make
- Git
- Simulated wearable sensors

## 1. Project Overview
This project implements a Linux-based virtual biometric data pipeline for a wearable fitness tracker. Since no physical wearable hardware is required, the system simulates sensors that generate heart-rate, SpO2, temperature, step-count and motion data.

The application collects sensor readings, validates them, processes them, stores them in a log file, detects abnormal values and displays a real-time health summary.

The project demonstrates C++ programming, Linux process/file concepts, inter-process communication concepts, signal handling, device-interface abstraction and software engineering practices.

## 2. Main Features
1. Simulated biometric sensor generation
2. Device-interface abstraction representing a wearable device driver boundary
3. Data validation
4. Health threshold detection
5. Real-time console dashboard
6. CSV logging
7. POSIX signal handling
8. Multi-process pipeline using fork/pipe
9. Graceful shutdown
10. Testable modular C++ design

## 3. Architecture
Sensor Simulator -> Device Interface -> Processing/Validation -> Health Analyzer -> Logger -> Dashboard

A separate producer/consumer demonstration uses a POSIX pipe:
Producer process -> pipe -> Consumer process

## 4. Build
Requirements:
- Linux
- g++
- C++17
- make

```bash
make
./bin/fitness_tracker
```

Run tests:
```bash
make test
```

Clean:
```bash
make clean
```

## 5. Project Structure
```text
src/       implementation
include/   header files
tests/     basic tests
docs/      stage documentation and UML
scripts/   demo helpers
evidence/  screenshots/progress evidence
Makefile
README.md
```

## 6. Stage Roadmap
Stage 1: Introduction
Stage 2: Requirements and PRD
Stage 3: Architecture and UML
Stage 4: Initial prototype
Stage 5: Testing and improvement
Stage 6: Final implementation and presentation

## 7. Device Driver Scope
This academic prototype does not implement a kernel module. Instead, `DeviceInterface` models the boundary between an application and a wearable device. The simulated sensor acts as the hardware source. This demonstrates the driver-layer concept without requiring physical hardware or kernel development.

## 8. Expected Output
The program prints periodic biometric readings similar to:

Heart Rate: 78 bpm
SpO2: 98 %
Temperature: 36.7 C
Steps: 1240
Status: NORMAL

When a generated value crosses a configured threshold, the health analyzer reports an alert and the event is logged.

## 9. Future Improvements
- Real Bluetooth wearable integration
- Linux kernel character driver
- SQLite database
- GUI dashboard
- MQTT/IoT communication
- Real sensor hardware
- Long-term analytics and charts
