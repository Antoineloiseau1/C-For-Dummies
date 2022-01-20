#include <stdio.h>

int main()
{
	char string[]="From where will come the rescue ?\n";
	char *ps=string;

	while(putchar(*ps++))
		;
	return(0);
}
