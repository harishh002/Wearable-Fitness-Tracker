# Stage 4 – Initial Implementation & Prototype

## Implementation Order
1. Create repository.
2. Add C++17 Makefile.
3. Implement BiometricData.
4. Implement SensorSimulator.
5. Implement DeviceInterface.
6. Implement HealthAnalyzer.
7. Implement Logger.
8. Implement POSIX pipe/fork demo.
9. Add signal handling.
10. Integrate all components.

## Prototype Demonstration
Run:
```bash
make
./bin/fitness_tracker
```

The application should:
- Start the pipeline.
- Demonstrate producer/consumer IPC.
- Generate biometric readings.
- Display status.
- Log records.
- Stop after 15 samples or SIGINT.

## Progress Evidence
Capture:
- Git repository screenshot
- Terminal showing successful build
- Application output
- Generated CSV file
- Test output
