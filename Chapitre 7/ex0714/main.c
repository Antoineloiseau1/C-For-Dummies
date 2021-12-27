#include <stdio.h>

int main()
{
    unsigned long int nombreFav;

    printf("Saisissez votre chiffre favori: ");
    scanf("%lu", &nombreFav);
    printf("%lu est mon chiffre favori aussi !\n", nombreFav);
    return(0);
}
