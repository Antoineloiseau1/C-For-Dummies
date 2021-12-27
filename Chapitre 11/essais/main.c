#include <stdio.h>

int transforme(int x);

int main()
{
    int a = 2;
    printf("a vaut %d\n", a);
    printf("a vaut maintenant %d\n", transforme(a));


    return 0;
}
int transforme(int x)
{
    x=5;
    printf("Dans la fonction x = %d\n", x);
    return(x);
}
