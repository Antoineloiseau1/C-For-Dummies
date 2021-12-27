#include <stdio.h>

int main()
{
    int boom;

    for(boom=25; boom>=0; boom=boom-1)
    {
        printf("%d\t", boom);
    }
    printf("\nBOOM!");
    return 0;
}
