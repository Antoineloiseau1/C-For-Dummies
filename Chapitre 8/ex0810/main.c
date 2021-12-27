#include <stdio.h>

int main()
{
    int a,b;

    printf("Entrez un premier chiffre: ");
    scanf("%d", &a);
    printf("Entrez un second chiffre: ");
    scanf("%d", &b);

    if(a<b)
        printf("%d est inferieur a %d.\n", a,b);
    else
        printf("%d est superieur a %d.\n", a,b);
    return(0);
}
