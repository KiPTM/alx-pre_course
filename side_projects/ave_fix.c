#include <stdio.h>

int main(void)
{
	int i, nons=0, total=0, value;
	float average;
	
	printf("How many numbers are to be read?");
	scanf("%d" ,&nons);

	for (i=0; i<nons; i++) 
	{
		scanf("%d" ,&value);
		total += value; //equivalent to total = total + value;
		printf("Read %d\n",value);
	}
	
	average = (float)total / (float)nons;
	printf("You read %d Values. Average = %f.\n" ,nons ,average);
	
	return(0);
}
