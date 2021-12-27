#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, r;


    srand((unsigned)time(NULL));
    for(a=1; a<=10; a++)
    {
        r=rand();
        r%=21;
        printf("ligne %d: %d\n", a,r);
    }
    return 0;
}
