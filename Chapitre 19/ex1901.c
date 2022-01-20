#include <stdio.h>

int main()
{
	int tab[5] = {2, 3 , 4 , 5, 6};

	printf("Adresse de tab: %p\n", &tab);
	printf("Adresse de tab: %p\n", tab);

	return(0);
}
