# Stage 1 – Project Introduction

## 1. Project Title
Wearable Fitness Tracker – Virtual Biometric Data Pipeline

## 2. Introduction
Wearable devices continuously collect health and activity information such as heart rate, blood oxygen saturation, body temperature, movement and step count. The project develops a Linux-based software pipeline that simulates these sensors and processes their data using C++.

## 3. Problem Statement
Real wearable hardware may not be available during development or classroom demonstration. A software-only prototype is therefore required to demonstrate how biometric information can be collected, passed through a device interface, validated, analyzed and stored.

## 4. Objectives
- Simulate wearable biometric sensors.
- Design a device-interface abstraction.
- Process biometric data using C++.
- Demonstrate Linux system programming.
- Demonstrate process creation and IPC.
- Detect abnormal values.
- Log readings to a file.
- Demonstrate graceful signal-based shutdown.
- Maintain a professional Git-based development process.

## 5. Scope
Included:
- Heart-rate simulation
- SpO2 simulation
- Temperature simulation
- Step/motion simulation
- Data validation
- Threshold analysis
- CSV logging
- POSIX pipe and process demonstration
- Signal handling
- Modular C++17 implementation

Excluded from the prototype:
- Physical sensors
- Medical diagnosis
- Real kernel driver
- Bluetooth hardware integration

## 6. Expected Outcome
A working Linux C++ application that produces virtual biometric readings, analyzes them, logs them and demonstrates system-programming concepts.

## 7. Applications
- Academic demonstration
- Wearable software prototyping
- IoT data-pipeline simulation
- Linux systems programming education

## 8. Success Criteria
The project is successful when:
1. The program builds on Linux.
2. Sensor readings are generated.
3. Readings are analyzed.
4. Results are logged.
5. POSIX process/IPC functionality is demonstrated.
6. Tests pass.
7. Git history shows stage-wise progress.
