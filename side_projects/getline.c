#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n = 10;
	char *buff = NULL;

	printf("Enter name  : \n");
	getline (&buff, &n, stdin);

	printf("Name is %sBuffer size is %ld\n ", buff, n);

	free (buff);

	return 0;
}

