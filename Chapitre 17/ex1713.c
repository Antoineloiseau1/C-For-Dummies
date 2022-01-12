#include <stdio.h>

char *binbin(int n);

int main()
{
	int b,x;
	b=0x11;
	x=0;
	while(x<8)
	{
		printf("%s 0x%04X %4d\n", binbin(b), b, b);
		b<<=1;
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
