# Viva Questions & Short Answers

Q1. Why did you choose C++?
A. It supports OOP, modular design, RAII and system-level programming.

Q2. Why Linux?
A. Linux provides POSIX APIs and exposes powerful process, file and device interfaces.

Q3. What is fork()?
A. fork() creates a new process by duplicating the calling process.

Q4. What is a pipe?
A. A pipe is an IPC mechanism used for communication between processes.

Q5. Why waitpid()?
A. It allows the parent to wait for a particular child process and avoid an unreaped child.

Q6. What is a signal?
A. A signal is an asynchronous notification delivered to a process.

Q7. What is the purpose of SIGINT handling?
A. It allows the program to stop gracefully when the user presses Ctrl+C.

Q8. What is a device driver?
A. A device driver is software that provides an interface between the operating system and hardware.

Q9. Did you implement a kernel driver?
A. No. This prototype uses a userspace device-interface abstraction and simulated sensors. A real kernel driver is listed as future scope.

Q10. Why simulate sensors?
A. It removes the need for physical wearable hardware while preserving the software pipeline design.

Q11. What is RAII?
A. Resource Acquisition Is Initialization; resources are managed through object lifetime.

Q12. Why use enum class?
A. It provides strongly typed enumerations and avoids accidental implicit conversions.

Q13. How is data stored?
A. The current prototype stores records in CSV format.

Q14. How is testing performed?
A. Unit tests verify health classification and integration tests verify the complete pipeline.

Q15. What are the future improvements?
A. Real sensors, BLE, a kernel driver, database storage, GUI and cloud integration.
