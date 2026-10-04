# Stage 3 – System Design & Architecture

## 1. Architecture
The system uses a layered architecture:

![Wearable Fitness Tracker System Architecture](Wearable%20Fitness%20Tracker%20System%20Architecture.png)

## 2. Component Responsibilities
SensorSimulator: creates virtual sensor data.
DeviceInterface: represents the boundary between application and wearable device.
HealthAnalyzer: evaluates thresholds.
Logger: persists results.
Pipeline: demonstrates fork, pipe and waitpid.
Main: coordinates the system.

## 3. Data Structures
BiometricData:
- int heartRate
- int spo2
- double temperature
- int steps
- bool moving

HealthStatus:
- NORMAL
- WARNING
- CRITICAL

AnalysisResult:
- status
- message

## 4. Device Driver Mapping
A real wearable architecture would contain:
Application -> device file/interface -> kernel driver -> hardware.

This prototype models:
Application -> DeviceInterface -> SensorSimulator.

The abstraction allows the rest of the software to remain independent from the physical sensor implementation.

## 5. Linux System Programming Concepts
- fork()
- pipe()
- waitpid()
- read()/write()
- signals
- file I/O
- process synchronization

## 6. Security and Reliability Considerations
- Validate input values.
- Avoid unsafe pointer ownership.
- Use RAII and standard C++ objects.
- Close file descriptors.
- Handle process creation failures.
- Stop cleanly on SIGINT/SIGTERM.
