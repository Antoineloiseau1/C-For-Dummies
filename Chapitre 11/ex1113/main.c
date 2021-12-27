#include <stdio.h>


int main()
{
    float degres, radians;
    printf("Entez une valeur en degres: ");
    scanf("%f", &degres);
    radians = 0.0174532925*degres;
    printf("%.2f en degres vaut %.2f radians.\n", degres, radians);
    return 0;
}
