#include <stdio.h>

int main()
{
    int a, b;

    a = 6;
    b = a - 2;

    if(a > b)
    printf("%d est plus grand que %d.\n", a,b);

    if(a < b)
    printf("%d est plus grand que %d.\n", b,a);
    return(0);
}
