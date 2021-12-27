#include <stdio.h>

int main()
{
    int a, b, plusGrand;

    printf("Indiquez une valeur A: ");
    scanf("%d", &a);
    printf("Indiquez une seconde valeur B: ");
    scanf("%d", &b);

    if(a > b)
        plusGrand = a;
    else
        plusGrand = b;

    printf("La valeur la plus grande est %d.\n", plusGrand);

    return(0);
}
