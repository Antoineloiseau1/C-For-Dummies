#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char *input;
	int size;

	input=(char*)malloc(sizeof(char)*1024);
	if(input==NULL)
	{
		printf("Memory Allocation Failed\n");
		exit(1);
	}
	puts("Please enter a sentence: ");
	fgets(input, 1023, stdin);
	size=strlen(input);
	if(realloc(input, sizeof(char)*(size+1))==NULL)
	{
		printf("Reallocation Failed\n");
		exit(1);
	}
	puts("Reallocation Succeed !");
	printf("You entered: %s\n", input);
	return(0);
}

