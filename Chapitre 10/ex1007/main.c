#include <stdio.h>

void graph(int cmptr); //prototype de la fonction void

int main()      // Appelle graph, Affiche une valeur, la double jusque 64
{
    int valeur;

    valeur=2;

    while(valeur <= 64)
    {
        graph(64);
        printf("La valeur est %d\n", valeur);
        valeur = valeur * 2;

    }
    return 0;
}

void graph(int cmptr) // affiche des asterisques
{
    int x;

    for(x = 0; x < cmptr; x++)
    {
        putchar('*');
    }
    putchar('\n');
}
