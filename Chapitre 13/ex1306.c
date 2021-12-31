#include <stdio.h>
#include <ctype.h>

int main()
{

	char phrase[] = {"ceci est un texte d'essai qui sera transforme"};

	printf("%s\n", phrase);
	int index=0;
	while(phrase[index])
	{
		phrase[index]=toupper(phrase[index]);
		index++;
	}

	puts("Après transformation:\n");
	printf("%s\n", phrase);

	index = 0;
	while(phrase[index])
	{
		phrase[index]=tolower(phrase[index]);
		index++;
	}

	puts("Transformation en minuscule");
	printf("%s\n", phrase);
		return(0);
}
