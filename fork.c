#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    pid = fork(); // 새로운 프로세스 생성

    if (pid < 0) { // 오류 발생
        fprintf(stderr, "Fork Failed\n");
        return 1;
    } else if (pid == 0) { // 자식 프로세스
        printf("Child process: PID = %d\n", getpid());
    } else { // 부모 프로세스
        printf("Parent process: PID = %d, Child PID = %d\n", getpid(), pid);
    }

    return 0;
}
