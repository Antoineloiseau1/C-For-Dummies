#include <stdio.h>

int main()
{
    int coordonnee;

    printf("Coordonnees de la cible: ");
    scanf("%d", &coordonnee);

    if(coordonnee<=-5 || coordonnee>=5)
    printf("La cible est proche\n");

    else
    printf("la cible est loin");
    return(0);
}
