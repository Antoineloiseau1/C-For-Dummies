#include <stdio.h>

char *strinvert(char *input);

int main()
{
	char mystring[64];

	printf("Please enter some text: ");
	fgets(mystring, 62, stdin);
	puts(strinvert(mystring));

	return(0);
}

char *strinvert(char *input)
{
	static char output[64];
	char *i, *o;

	i = input; o = output;

	while(*i++ != '\n');
	i--;

	while(i >= input)
		*o++ = *i--;
	*o = '\0';

	return(output);
}
