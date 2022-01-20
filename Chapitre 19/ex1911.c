#include <stdio.h>

int main()
{
	float numbers[5] = {98.37, 76.36, 90.54, 328.37, 54.38};
	float *pn;

	pn=numbers;
	printf("Mardi il fera %.2f\n", *(pn+1));
	printf("Vendredi il fera %.2f\n", *(pn+4));
	return(0);
}
