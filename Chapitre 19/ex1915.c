#include <stdio.h>

int main()
{
	char *sample = "from where will come the recue ?\n";
	char *backup=sample;

	while(putchar(*sample++));
	sample=backup;
	puts(sample);
	puts(backup);
	return(0);
}
