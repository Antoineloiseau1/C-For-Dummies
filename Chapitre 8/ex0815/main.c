#include <stdio.h>

int main()
{
    char code;

    printf("Indiquez le code erreur (A, B ou C): ");
    scanf("%c", &code);

    switch(code)
    {
        case 'A':
            puts("Erreur disque, vous n'y pouvez rien.");
            break;
        case 'B':
            puts("Format invalide, appelez votre avocat.");
            break;
        case 'C':
            puts("Nom de fichier incorrect, spank it.");
            break;
        default:
            puts("Haha, ni 1, ni 2, ni 3 ?");

    }

    return 0;
}
