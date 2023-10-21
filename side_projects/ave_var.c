#include <stdio.h>

int main(void)
{
	int i, nons=0, total=0, valsread, value;
	float average;
	
	valsread =scanf("%d" ,&value);
	while(valsread > 0) 
	{
		if(value < 0)
		{
			valsread = scanf("%d",&value);
			continue;
		}
		nons++;
		total += value; //equivalent to total = total + value;
		printf("Read %d\n",value);
		valsread = scanf("%d" ,&value);
	}
	
	average = (float)total / (float)nons;
	printf("You read %d Values. Average = %f.\n" ,nons, average);
	
	return(0);
}
