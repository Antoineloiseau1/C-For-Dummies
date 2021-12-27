#include <stdio.h>

#define TRUE 1
#define FALSE 0

void limiter(int stop);
int verify(int check);

int main()
{
    int saisie;

    do
    {
        printf("Enter a value to stop (0-100): ");
        scanf("%d", &saisie);
        if(verify(saisie))
        {
            limiter(saisie);
        }
        else
        {
            puts("You're out of Range...");
        }
    }while(verify(FALSE));

    return(0);
}



int verify(int check)
{
    if(check<0 || check>100)
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
            puts("You win !");
            return;
        }
    }
    puts("I win !");
}
