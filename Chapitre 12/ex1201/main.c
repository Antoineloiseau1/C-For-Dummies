#include <stdio.h>

#define TAILLE_ARRAY 10

int main()
{
    int maxScore[TAILLE_ARRAY];
    int x;

    for(x=0; x<TAILLE_ARRAY; x++)
    {
        printf("Entrez votre score #%d: ", (x+1));
        scanf("%d", &maxScore[x]);

    }
    for(x=0; x<TAILLE_ARRAY; x++)
    {
        printf("Votre score #%d est: %d\n", (x+1), maxScore[x]);
    }

    return 0;
}
