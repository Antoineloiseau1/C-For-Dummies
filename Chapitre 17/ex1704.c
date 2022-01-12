#include <stdio.h>

int main()
{
	char input[64];
	int ch;
	int x = 0;

	printf("Saississez un texte: ");
	fgets(input, 63, stdin);

	while(input[x] != '\n')
	{
		if(input[x] == ' ')
		{	
			putchar(' ');
			x++;
		}
					
		else
		{
		//	printf("\nelse\n");
			ch=input[x] & 223;
			putchar(ch);
			x++;
		}	
	}
	putchar('\n');

	return(0);
}

