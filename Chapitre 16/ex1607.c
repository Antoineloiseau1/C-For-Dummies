#include <stdio.h>

void half(void);
void dubble(void);

int age;
int size;

int main()
{
	printf("How old are you ?: ");
	scanf("%d", &age);
	printf("How tall are you ?: ");
	scanf("%d", &size);
	printf("You are %d years old and %d meters tall\n", age, size);
	half();
	dubble();
	printf("You are not %d years old and not %d meters tall\n", age, size);
	return(0);
}

void dubble(void)
{
	age*=2;
	printf("Your aged doubled is %d.\n", age);
	size*=2;
	printf("Your size doubled is %d.\n", size);
}

void half(void)
{
	float a,h;

	a=(float)age/2;
	printf("Half your age is %.1f.\n" ,a);
	h=(float)size/2;
	printf("Half your size is %.1f\n", h);
}
