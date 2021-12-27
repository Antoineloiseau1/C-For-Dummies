#include <stdio.h>

#define TRUE 1
#define FALSE 0

void limiter(int stop);
int verify(int check);

int main()
{
    int user;

    printf("Enter a number to stop (0-100): ");
    scanf("%d", &user);

    if(verify(user))
        limiter(user);
    else
        puts("You're out of range...");

    return(0);
}


int verify(int check)
{
    if(check<0 || check>100)
        return FALSE;
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
