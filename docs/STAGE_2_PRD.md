# Stage 2 – Project Requirements Document (PRD)

## 1. Product
Wearable Fitness Tracker – Virtual Biometric Data Pipeline

## 2. Functional Requirements
FR1. Generate heart-rate readings.
FR2. Generate SpO2 readings.
FR3. Generate temperature readings.
FR4. Generate movement and step readings.
FR5. Provide a device-interface abstraction.
FR6. Validate and analyze biometric readings.
FR7. Classify readings as NORMAL, WARNING or CRITICAL.
FR8. Log readings to CSV.
FR9. Create a producer and consumer process.
FR10. Transfer a sample message using a POSIX pipe.
FR11. Handle SIGINT/SIGTERM for graceful shutdown.
FR12. Provide automated tests for health analysis.

## 3. Non-Functional Requirements
NFR1. The project must compile using C++17.
NFR2. The project should run on Linux.
NFR3. Code should be modular.
NFR4. Compiler warnings should be enabled.
NFR5. The application should fail gracefully.
NFR6. Documentation should be maintained.
NFR7. Git should be used for version control.

## 4. Hardware Requirements
- Any Linux-capable computer
- No physical wearable sensor required

## 5. Software Requirements
- Linux
- GNU g++
- GNU Make
- Git
- Optional: VS Code
- Optional: PlantUML/Mermaid viewer

## 6. Modules
1. Sensor Simulator
2. Device Interface
3. Health Analyzer
4. Logger
5. IPC Demonstrator
6. Main Controller
7. Test Module

## 7. Deliverables
- Source code
- Makefile
- README
- PRD
- Architecture documentation
- UML diagrams
- Test cases/results
- Git repository
- Final report
- Presentation

## 8. Development Timeline
Day/Session 1: Introduction and requirements
Day/Session 2: Architecture and UML
Day/Session 3: Sensor and analyzer implementation
Day/Session 4: Linux IPC and signal handling
Day/Session 5: Testing and integration
Day/Session 6: Documentation and presentation

## 9. Acceptance Criteria
All functional requirements must be demonstrable and the unit tests must pass.
