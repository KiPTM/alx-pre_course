#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_INPUT_SIZE 1024

int main() {
    char input[MAX_INPUT_SIZE];

    while (1) {
        printf("$ ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            perror("fgets");
            exit(1);
        }

        input[strcspn(input, "\n")] = '\0';

        pid_t pid = fork();

        if (pid == -1) {
            perror("fork");
            exit(1);
        } else if (pid == 0) {
            char* args[MAX_INPUT_SIZE];
            char* token = strtok(input, " ");
            int i = 0;

            while (token != NULL) {
                args[i] = token;
                i++;
                token = strtok(NULL, " ");
            }

            args[i] = NULL;

            if (execvp(args[0], args) == -1) {
                perror("execvp");
                exit(1);
            }
        } else {
            int status;
            waitpid(pid, &status, 0);
        }
    }

    return 0;
}
