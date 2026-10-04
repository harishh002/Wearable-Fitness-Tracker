#include "pipeline.h"
#include <unistd.h>
#include <sys/wait.h>
#include <iostream>
#include <cstring>

void runPipelineDemo() {
    int fd[2];
    if (pipe(fd) == -1) {
        perror("pipe");
        return;
    }

    pid_t pid = fork();

    if (pid == -1) {
        perror("fork");
        return;
    }

    if (pid == 0) {
        close(fd[1]);
        char buffer[128]{};
        ssize_t n = read(fd[0], buffer, sizeof(buffer) - 1);
        if (n > 0) {
            buffer[n] = '\0';
            std::cout << "[Consumer process] Received through pipe: "
                      << buffer << "\n";
        }
        close(fd[0]);
        _exit(0);
    }

    close(fd[0]);
    const char* message = "Biometric packet from producer process";
    write(fd[1], message, std::strlen(message));
    close(fd[1]);
    waitpid(pid, nullptr, 0);
}
