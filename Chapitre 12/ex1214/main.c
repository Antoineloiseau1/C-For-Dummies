#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 40

int main()
{
    int random[ARRAY_SIZE], x, externLoop, internLoop, temp;
    srand((unsigned)time(NULL));

    for(x=0; x<ARRAY_SIZE; x++)
        {
            random[x]=rand()%101;
            printf("%d\t", random[x]);
        }

    putchar('\n');

    for(x=0; x<ARRAY_SIZE; x++)
    {
        for(externLoop=0; externLoop<ARRAY_SIZE-1; externLoop++)
        {
            for(internLoop=externLoop+1; internLoop<ARRAY_SIZE; internLoop++)
            {
                if(random[externLoop] < random[internLoop])
                {
                    temp=random[externLoop];
                    random[externLoop]=random[internLoop];
                    random[internLoop]=temp;
                }
            }

        }
    }

    printf("Here are all the values sorted:\n");
    for(x=0; x<ARRAY_SIZE; x++)
    {
        printf("%d\t", random[x]);
    }
        putchar('\n');

    return 0;
}
