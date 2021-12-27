#include <stdio.h>

int main()
{
    char count;

    for(count='z'; count>='a'; count=count-1)
    {
        printf("%c", count);
    }
    puts("");
    return 0;
}
