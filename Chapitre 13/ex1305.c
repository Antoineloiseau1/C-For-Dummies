#include <stdio.h>
#include <ctype.h>

int main()
{
	char yorn; 

	printf("Would you like the moon to explode ? [Y/N] ?: ");
	scanf("%c", &yorn);
	yorn=toupper(yorn); //Rise char to Upper Case

	switch(yorn)
	{
		case('Y'):
		printf("BOOM!\n");
		break;

		case('N'):
		printf("The moon is safe\n");
		break;

		default:
		printf("indecision can be fatal\n")
		break;
	}
	
	return(0);
}


