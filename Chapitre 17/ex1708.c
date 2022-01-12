#include <stdio.h>

char *binbin(int n);

int main()
{
	int a, x ,r;

	a = 73;
	x = 170;

	printf("  %s %3d\n", binbin(a), a);
	printf("^ %s %3d\n", binbin(x), x);
	r = a ^ x;
	printf("= %s %3d\n", binbin(r), r);
	printf("^ %s %3d\n", binbin(x), x);
	r = a ^ x;
	printf("= %s %3d\n", binbin(a), a);
	return(0);
}

char *binbin(int n)
{
	static char bin[9];
	int x = 0;

	while(x<8)
	{	
		bin[x] = n & 0x80 ? '1' : '0';
		n <<= 1;
		x++;
	}
	bin[x] = '\0';
	return(bin);
}
