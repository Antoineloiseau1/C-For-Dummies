#include <stdio.h>

int main(int argc, char *argv[])
{
	int x=0;

	while(x<argc)
	{
		printf("Arg#%d = %s\n", x+1, argv[x]);
		x++;
	}
	return(0);
}
