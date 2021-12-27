#include <stdio.h>
#include <math.h>

int main()
{
    int premierTableau[] = {10, 12, 14, 15, 16, 18, 20};
    float deuxiemeTableau[7];
    int x;

    for(x=0; x<7; x++)
    {
        printf("La racine carré de %d est: %.2f\n", premierTableau[x], deuxiemeTableau[x]=sqrt(premierTableau[x]));
    }
    return 0;
}
