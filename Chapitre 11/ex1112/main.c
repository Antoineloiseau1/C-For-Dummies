#include <stdio.h>
#include <math.h>


int main()
{
    float x;

    for(x=0; x<=10; x++)
    {
        printf("2^%.0f = %.0f\n", x, pow(2, x));
    }
    return 0;
}
