#include <stdio.h>

#define TRUE 1
#define FALSE 0

void limiter(int stop);
int verifier(int check);
int inputvalue();

int main()
{
    inputvalue();
    verifier(inputvalue);

    if(verifier)
    {
        limiter(inputvalue);
    }
    else
        printf("Vous saisie est out of range !\n");

    return(0);
}

int inputvalue()
{
    int saisie;

    printf("Indiquez une valeur pour stopper (0-100): ");
    scanf("%d", &saisie);
    return saisie;
}



int verifier(int check)
{
    if(check < 0 || check > 100)
        return FALSE;
    else
        return TRUE;


}



void limiter(int stop)
{
    int x;
    for(x=0; x<=100; x++)
    {
        printf("%d ", x);
        if(x == stop)
        {
            puts("Vous gagnez !");
            return;
        }
    }
    puts("Je gagne !");
}
