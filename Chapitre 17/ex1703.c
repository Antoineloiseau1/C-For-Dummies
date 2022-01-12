#include <stdio.h>

#define SET 223

char *binbin(int n);

int main()
{
	int bor, result;


	printf("Indiquez une valeur entre 0 et 255: ");
	scanf("%d", &bor);
	result = bor&SET;

	printf("\t%s\t%d\n", binbin(bor), bor);
	printf("&\t%s\t%d\n", binbin(SET), SET);
	printf("=\t%s\t%d\n", binbin(result), result);
	return(0);
}

char *binbin(int n)
{
	static char bin[9];
	int x=0;

	while(x<8)
	{
		bin[x] = n & 0x80 ? '1' : '0';
		n <<=1;
		x++;
	}
	bin[x] = '\0';
	return(bin);
}



