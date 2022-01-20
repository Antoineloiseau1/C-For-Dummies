#include <stdio.h>

int main()
{
	char tab[27];
	char *ptab;

	ptab=tab;
	int x=0;
	while(x<26)
	{
		*ptab++=x+'A';
		x++;
	}

	ptab=tab;
	x=0;
	while(x<26)
	{
		printf("%d a pour valeur: %c\n", x+++1, *ptab++);
	}
	return(0);
}

