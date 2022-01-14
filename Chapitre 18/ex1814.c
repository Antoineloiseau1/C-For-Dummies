#include <stdio.h>

int main()
{
	int entier;
	float flottant;
	int *ip;
	float * fp;

	ip=&entier;
	fp=&flottant;

	*ip=512;
	*fp=3.98;

	printf("Valeur entière: %d\nValeur flottante: %.2f\n", entier, flottant);
	return(0);
}	

