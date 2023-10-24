#include <stdio.h>
#define MAX 10

int main (void)
{
	int data[MAX];
	int i, j, tmp;
	
	/* read in the data*/
	
	for(i=0; i<MAX; i++){
	printf("Enter item #%d: ",i);
	scanf("%d",&data[i]);
	}
	
	printf("You have entered the following items:\n");
	for(i=0; i<MAX; i++){
		printf("item #%d: %d\n",i,data[i]);
	}
	
	return(0);

}
