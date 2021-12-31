#include <stdio.h>
#include <ctype.h>

int main()
{
	char phrase[]="Art.4.: La liberté consiste à pouvoir faire tout ce qui ne nuit pas à autrui: ainsi, l'exercice des droits naturels de chaque homme n'a de bornes que celles qui assurent aux autres Membres de la Société la jouissance de ces mêmes droits. Ces bornes ne peuvent être déterminées que par la Loi.";

	int index, alpha, blank, punct, lower, upper, alnum, print;

	alpha = blank = punct = lower = upper = alnum = print = 0;

	index = 0;

	while(phrase[index])
	{
		if(isalpha(phrase[index]))
			alpha++;
		if(isblank(phrase[index]))
			blank++;
		if(ispunct(phrase[index]))
			punct++;
		if(isupper(phrase[index]))
			upper++;
		if(islower(phrase[index]))
			lower++;
		if(isprint(phrase[index]))
			print++;

		index++;
	}

	printf("\"%s\"\n", phrase);
	puts("Statistiques: ");
	printf("%d lettres de l'alphabet.\n", alpha);
	printf("%3d Blancs\n", blank);
	printf("%3d Signes de ponctuation\n", punct);
	printf("%3d Majuscules\n", upper);
	printf("%d Minuscules\n", lower);
	printf("%d Caractères\n", print);

	return(0);
}

