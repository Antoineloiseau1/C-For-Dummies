#include <stdio.h>

#define TAB_SIZE 6

int main()
{
    int tabBulles[] = {95, 60, 6, 87, 50, 24};
    int interne, externe, temp, x;

    puts("Tableau de départ: ");
    for(x=0; x<TAB_SIZE; x++)
        printf("%d\t", tabBulles[x]);
    putchar('\n');

    for(externe=0 ;externe<(TAB_SIZE-1); externe++)
    {
        for(interne=externe+1; interne<TAB_SIZE; interne++)
        {
            if(tabBulles[externe] > tabBulles[interne])
            {
                temp=tabBulles[externe];
                tabBulles[externe] = tabBulles[interne];
                tabBulles[interne] = temp;
            }
        }
    }

    puts("tableau apres tri:");
    for(x=0; x<TAB_SIZE; x++)
        printf("%d\t", tabBulles[x]);
    putchar('\n');
    return 0;
}
