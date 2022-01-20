#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	float *temp;
	char check;
	temp = (float *)malloc(sizeof(float)*1);
	if(temp == NULL)
	{
		puts("Allocation mémoire impossible\n");
		exit(1);
	}
	printf("Quelle est la température exterieure ? ");
	scanf("%f", temp);
	getchar(); 									// stocke le caractère '\n'
	printf("La température est-elle en Celsius ou Fahrenheit ? [C/F]: ");
	check = toupper(getchar());							 // stocke dans check
	if(check == 'C')
	{	
		*temp = *temp + 273.15;
		printf("La température extérieure est de %.2f degres Kelvin.\n", *temp);
	}
	else if(check == 'F')
	{
		*temp = (*temp + 459.67) * (5.0/9.0);
		printf("La température extérieure est de %.2f degres Kelvin.\n", *temp);
	}
	else
		printf("Vous n'avez pas entré le bon caractère\n");
	return(0);
}
