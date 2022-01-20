#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void create(int *tab);
void show(int *tab);

int main()
{
	int tableau[SIZE];
	create(tableau);
	show(tableau);
	return(0);
}

void create(int *tab)
{
	srand((unsigned)time(NULL));
	int x=0;
	while(x<SIZE)
		*(tab+x++)=rand()%10;
}

void show(int *tab)
{
	int i=0;
	while(i<SIZE)
		printf("La valeur à l'emplacement %d du tableau vaut %d\n", i, *(tab+(i++)));
}
