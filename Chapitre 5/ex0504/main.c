#include <stdio.h>

int main()
{
    puts("Valeurs initiales: 8 et 2");
    printf("Addition = %d\n",   8+2);
    printf("Soustraction = %d\n", 8-2);
    printf("Multiplication = %d\n",   8*2);
    printf("Division = %d\n\n",   8/2);
    puts("On considère les deux flottants: 456.98 et 213.4");
    printf("La somme des deux fait: %3.2f\n\n", 456.98+213.4);
    puts("On considère les trois valeurs: 8, 14 et 25");
    printf("Le produit de ces trois valeurs fait: %d\n\n", 8*14*25);
    puts("Quel est le résultat de \"0+50*1-60-60*0+10\" ?");
    printf("Réponse: %d\n", 0+50*1-60-60*0+10);

    return(0);
}
