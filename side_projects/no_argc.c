#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;
	

	printf("argv content is : argv[]\n");
	
	while (*av != NULL )
	{
		printf("argv = %s\n", *av);
		av++;
	}
	return (0);

}
