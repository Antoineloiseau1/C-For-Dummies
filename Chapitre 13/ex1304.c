#include <stdio.h>
#include <ctype.h>

int main()
{
	char yorn;

	printf("Would you like the moon to explode ? [Y/N] ?: ");
	scanf("%c", &yorn);
	yorn=toupper(yorn);

	if(yorn == 'Y')
		printf("BOOM !!!\n");
	else
		printf("The moon is safe\n");

	return(0);
}
