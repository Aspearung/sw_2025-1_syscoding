#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    pid = fork(); // ���ο� ���μ��� ����

    if (pid < 0) { // ���� �߻�
        fprintf(stderr, "Fork Failed\n");
        return 1;
    } else if (pid == 0) { // �ڽ� ���μ���
        printf("Child process: PID = %d\n", getpid());
    } else { // �θ� ���μ���
        printf("Parent process: PID = %d, Child PID = %d\n", getpid(), pid);
    }

    return 0;
}
