#include <stdio.h>

int main()
{
	char alpha = 'A';
	char *pa;
	int x;

	pa = &alpha;
	x=0;
	while(x<26)
	{
		putchar((*pa)++);
		x++;
	}
	putchar('\n');
	return(0);
}


