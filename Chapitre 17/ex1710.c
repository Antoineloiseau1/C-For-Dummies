#include <stdio.h>

char *binbin(int n);

int main()
{
	int decalbin, x=0;

	printf("Indiquez une valeur entre 0 et 255: ");
	scanf("%d", &decalbin);
	while(x<8)
	{
		printf("%s\t%d\n", binbin(decalbin), decalbin);
		decalbin=decalbin>>1;
		x++;
	}

	return(0);
}

char *binbin(int n)
{
	static char bin[17];
	int x = 0;

	while(x<16)
	{	
		bin[x] = n & 0x8000 ? '1' : '0';
		n <<= 1;
		x++;
	}
	bin[x] = '\0';
	return(bin);
}
