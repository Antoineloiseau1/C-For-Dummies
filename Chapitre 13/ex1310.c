#include <stdio.h>
#include <string.h>

int main()
{
	char primo[40];
	char second[20];

	printf("Enter you first name: ");
	scanf("%s", primo);
	printf("Then your last name: ");
	scanf("%s", second);
	strcat(primo, " ");
	strcat(primo,  second);
	printf("Your full name is %s.\n", primo);

	return(0);
}
