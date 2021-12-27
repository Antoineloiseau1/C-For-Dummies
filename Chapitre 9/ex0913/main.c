#include <stdio.h>

int main()
{
    float halfStep;

    halfStep = -5;
    while(halfStep<=5)
    {
        printf("%1.1f\n", halfStep);
        halfStep=halfStep+0.5;
    }
    return 0;
}
