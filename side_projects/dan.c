#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main (void)
{
	pid_t tevin;

	char *argv[] = {"/bin/ls", "-l", NULL};
	
	tevin = fork();
	
	if (tevin == -1)
		return -1;
	if (tevin == 0)
	{
		int val = execve(argv[0], argv, NULL);

		if (val == -1)
		perror("error");
	}
	else
	{
		wait(NULL);
		printf("Done with execve\n");
	}
	return(0);
}
