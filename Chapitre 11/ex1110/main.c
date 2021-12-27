#include <stdio.h>

int main()
{
    int x;

    x=5;
    while(x<=100)
    {
        printf("%d ", x);
        x+=5;
    }
    putchar('\n');
    return 0;
}
