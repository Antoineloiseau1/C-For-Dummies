#include <stdio.h>

#define SIZE 6

int main()
{
	char tab[SIZE][16]={"Ceci", "est", "une", "chaine", "de", "caracteres"};

	int x = 0;
	int y;

	while(x<SIZE)
	{
		y=0;
		while(tab[x][y] != '\0')
		{
			printf("%c", tab[x][y]);
			y++;
		}
		putchar('\n');
		x++;
	}
	putchar('\n');
	return(0);
}
