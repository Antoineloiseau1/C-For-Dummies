#include <stdio.h>

void procedure(void);

int main()
{
	puts("premier appel");
	procedure();
	puts("deuxieme appel");
	procedure();
	return(0);
}

void procedure(void)
{	
	static int a;
	printf("La valeur de la variable a est %d\n", a);
	printf("Indiquez une autre valeur: ");
	scanf("%d",&a);
}
