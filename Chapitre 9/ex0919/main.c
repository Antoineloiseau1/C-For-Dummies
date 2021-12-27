#include <stdio.h>

int main()
{
    int comptr;

    comptr=0;
    for(;;)
    {
        printf("%d, ", comptr);
        comptr=comptr+1;
        if(comptr>50)
        break;
    }
    putchar('\n');
    return 0;
}
