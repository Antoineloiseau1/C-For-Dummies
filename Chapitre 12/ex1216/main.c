#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="Vive le langage C !";
    int x, externLoop, internLoop;
    char temp;


        for(externLoop=0; externLoop<strlen(str)-1; externLoop++)
        {
            for(internLoop=externLoop+1; internLoop<strlen(str); internLoop++)
            {
                if(str[externLoop] > str[internLoop])
                {
                    temp=str[externLoop];
                    str[externLoop]=str[internLoop];
                    str[internLoop]=temp;
                }
            }
        }


    puts("Voici les lettres dans l'ordre:");

    for(x=0; x<strlen(str)-1; x++)
    {
        printf("%c\n", str[x]);
    }
    return 0;
}
