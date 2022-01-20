#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *three;
	three=(int *)malloc(sizeof(int)*3);
	if(three == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	int x=0;
	while(x<3)
		*(three+x++)=(x+1)*100;
	x=0;
	while(x<3)
		printf("valeur à adresse %p = %d\n", three+x, *(three+x++));
	return(0);
}
