#include <stdio.h>

void remise(float *price);

int main()
{
	float prixbase = 42.99;
	float *pointer;
	pointer=&prixbase;

	printf("L'article coute %.2f$\n", prixbase);
	remise(pointer);
	printf("Apres remise, l'article coute %.2f$\n", prixbase);
	return(0);
}

void remise(float *price)
{
	*price*=0.90;
}
