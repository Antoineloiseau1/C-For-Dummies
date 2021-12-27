#include <stdio.h>

#define TAILLETABLEAU 3

int main()
{
    char personne[TAILLETABLEAU];

    printf("Qui êtes vous ? ");
    fgets(personne, TAILLETABLEAU, stdin);
    printf("Heureux de vous rencontrer %s.\n", personne);
    return(0);
}
