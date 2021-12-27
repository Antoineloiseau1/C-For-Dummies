#include <stdio.h>

#define SECRET 17

int main()
{
    int devineEssai;

    printf("Tentez de deviner le chiffre secret: ");
    scanf("%d", &devineEssai);

    if(devineEssai==SECRET)
    {
    printf("BRAVO, le chiffre était bien %d !\n", SECRET);
    return(0);
    }
    else
    {
    printf("Dommage tu trouvera la prochaine fois...\n");
    return(1);
    }
}
