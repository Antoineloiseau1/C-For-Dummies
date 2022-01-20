#include <stdio.h>
#include <stdlib.h>

int isvowel(char *c);

int main()
{
	char *input1, *input2;
	int i=0;
	input1=(char *)malloc(sizeof(char)*1024);
	input2=(char *)malloc(sizeof(char)*1024);
	if(input1 == NULL || input2 == NULL)
	{
		puts("Memory allocation failed\n");
		exit(1);
	}
	puts("Please enter a phrase: ");
	fgets(input1, 1023, stdin);
	while(*(input1+i) != '\n')
	{
		*(input2+i)=*(input1+i);
		if(isvowel((input1+i)))
			*(input2+i)='@';
		i++;
	}
	puts("You Entered: ");
	printf("\"%s\"\n", input2);
	return(0);
}

int isvowel(char *c)
{
	switch(*c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		case 'y':
		case 'Y':
			return(1);
			break;
		default:
			return(0);
	}
}
