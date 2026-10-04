# Stage 5 – Testing, Integration & Improvement

## Unit Tests
1. Normal heart rate -> NORMAL
2. Borderline heart rate -> WARNING
3. Extreme heart rate -> CRITICAL
4. Normal SpO2 -> NORMAL
5. Low SpO2 -> WARNING/CRITICAL
6. Abnormal temperature -> WARNING/CRITICAL

## Integration Tests
IT1. Sensor -> DeviceInterface -> Analyzer
IT2. Analyzer -> Logger
IT3. Producer -> pipe -> Consumer
IT4. SIGINT -> graceful shutdown
IT5. Full application -> CSV output

## Example Test Table

| Test | Input | Expected | Result |
|---|---|---|---|
| T01 | HR 75, SpO2 98, Temp 36.7 | NORMAL | PASS |
| T02 | HR 125 | WARNING | PASS |
| T03 | HR 160, SpO2 85 | CRITICAL | PASS |
| T04 | Normal sample logging | CSV record | PASS |
| T05 | SIGINT | Graceful stop | PASS |

## Debugging Checklist
- Check compiler warnings.
- Check failed pipe/fork calls.
- Check file creation.
- Check CSV formatting.
- Check signal handling.
- Check child process completion with waitpid().

## Improvements
- Modular headers/source files
- Explicit status enum
- RAII-style standard library usage
- Compiler warnings
- Automated unit test target
