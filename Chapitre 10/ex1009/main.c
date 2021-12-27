#include <stdio.h>

float conversion(float fahr);

int main()
{
    float temp_farh;

    printf("Indiquez votre valeur en Fahrenheit: ");
    scanf("%f", &temp_farh);
    printf("%.1fF Equivaut à %.1fC.\n", temp_farh, conversion(temp_farh));

    return(0);
}

float conversion(float fahr)
{
    return (fahr - 32) / 1.8;
}
