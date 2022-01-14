#include <stdio.h>

int main()
{
	char a,b,c;
	char *p;

	a = 'A'; b = 'B'; c = 'C';

	printf("Apprenez votre ");
	p=&a;
	putchar(*p);
	p=&b;
	putchar(*p);
	p=&c;
	putchar(*p);
	printf("s\n");

	return(0);
}
