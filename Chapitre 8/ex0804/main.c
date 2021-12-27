#include <stdio.h>

int main()
{
    int premier, second;

    printf("Indiquez la valeur de premier: ");
    scanf("%d", &premier);
    printf("Indiquez la valeur de second: ");
    scanf("%d", &second);

    puts("Evaluation en cours...");

    if(premier<second)
    printf("%d est plus petit que %d.\n", premier, second);

    else if(premier>second)
    printf("%d est plus grand que %d.\n", premier, second);

    else
    printf("Les deux chiffres sont identiques.\n");

    return(0);
}
