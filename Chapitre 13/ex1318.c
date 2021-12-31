#include <stdio.h>

int getch(void);

int main()
{
		char primo, secundo;

		printf("Enter the first letter of your first name: ");
		primo=getch();
		printf("Then the first letter of your last name: ");
		secundo=getch();
		printf("Your initials are '%c' '%c'.\n", primo, secundo);
		return(0);
}

int getch(void)
{
	char ch;

	ch=getchar();
	while(getchar()!='\n')
		;
	return(ch);
}
