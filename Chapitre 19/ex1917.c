#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *fruits[] = {
		"melon",
		"banane",
		"poire",
		"pomme",
		"noix",
		"raisin",
		"myrtille"
	};
	int x, y;
	x=0;
	while(x<6)
	{
		y=0;
		while(putchar(*(*(fruits+x)+y++)));
		x++;
		putchar('\n');
	}
	printf("La taille du tableau est: %ld\n", sizeof(fruits));
	return(0);
}
