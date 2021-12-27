#include <stdio.h>

int main()
{
    char prenom[16];
    char nomDeFamille[16];

    printf("Quel est votre prénom ?: ");
    scanf("%15s", prenom);
    printf("Quel est votre nom de famille ?: ");
    scanf("%15s", nomDeFamille);
    printf("Ravi de vous rencontrer %s %s.\n", prenom, nomDeFamille);

    return 0;
}
