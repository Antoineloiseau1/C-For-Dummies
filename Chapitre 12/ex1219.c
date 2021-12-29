#include <stdio.h>

#define TAILLE 6

int main()
{

	char president[TAILLE][12]={
		"Sarkozy",
		"Coty",
		"Grevy",
		"Mitterand",
		"Chirac",
		"Pompidou"
	};
	
	int x=0;

	while(x<TAILLE)
	{
		puts(president[x]);
		x++;
	}
	return(0);
}
