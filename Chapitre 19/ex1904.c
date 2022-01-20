#include <stdio.h>

int main()
{
	int nombres[10];
	int x;
	int *pn;

	pn=&nombres;
	x=0;
	while(x<10)
	{
		*pn=x+1;
		pn++;
		x++;
	}

	pn=&nombres;
	x=0;
	while(x<10)
	{
		printf("nombres[%d] = %d son adresse est %p\n", x, *pn, pn);
		pn++;
		x++;
	}
	return(0);
}
	
