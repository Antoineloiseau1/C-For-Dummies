#include <stdio.h>
#include <string.h>

int main()
{
	char password[]={"ILoveTacos06"};
	char input[30];
	int isMatch;

	printf("Password ?: ");
	scanf("%s", input);


	if(!strcasecmp(password, input))
		printf("Correct\n");
	else
		printf("Nope, password isn't %s.\n", input);

	return(0);
}
