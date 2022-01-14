#include <stdio.h>

int main()
{
	int number = 69;
	int *p=&number;

	printf("La valeur de %p est %d\n", &p, *p);
	return(0);
}
