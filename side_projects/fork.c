#include <stdio.h>
#include<unistd.h>

int main(void)
{
	pid_t pid;
     	pid_t ppid;
/*written before fork was called*/

/*called fork*/

	pid = fork();
	if (pid == -1)
	{
		perror("unsuccessful \n");
		return (1);
	}

	if (pid == 0)
	{
		sleep(7);
		printf("I am the child process \n");
	}
	else
	{
		ppid = getppid();
		printf("Parent pid is: %u\n", ppid );
	}

	return(0);
}

