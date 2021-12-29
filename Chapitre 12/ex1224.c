#include <stdio.h>

#define SIZE 5

void displayArray(int array[]);
void incremArray(int array[]);

int main()
{
	int tab[]={1, 2, 3, 4, 5};

	puts("Here is your Array before increm: ");
	displayArray(tab);
	incremArray(tab);
	puts("Here is your array after increm: ");
	displayArray(tab);
	return (0);
}

void displayArray(int array[])
{
	int x=0;

	while(x<SIZE)
	{
		printf("%d\t", array[x]);
		x++;
	}
	putchar('\n');
}

void incremArray(int array[])
{
	int x=0;
	while(x<SIZE)
	{
		array[x]++;
		x++;
	}
}
