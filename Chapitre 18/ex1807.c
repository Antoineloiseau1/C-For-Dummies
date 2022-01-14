#include <stdio.h>

int main()
{
	int numbers[5] = {100, 200, 300, 400, 500};
	int x = 0;

	while(x<5)
	{
		printf("%d en %p\n", numbers[x], &numbers[x]);
		x++;
	}
	return(0);
}
