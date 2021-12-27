#include <stdio.h>

int main()
{
    char reponse;
    printf("C'est une bonne situation ça scribe ? [O/N]: ");
    scanf("%s", &reponse);

    if(reponse=='O' || reponse=='o' || reponse=='N' || reponse=='n')
    printf("Vous avez raison, je ne crois pas qu'il y ait\nde bonnes ou de mauvaises situations...\n");
    else
    printf("Repondez pour oui ou non bon sang de bon soir !\n");

    return 0;
}
