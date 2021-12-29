#include <stdio.h>

int main()
{
    char ticTacToe[3][3];
    int x,y;

    for(x=0; x<3; x++)
        for(y=0; y<3; y++)
            ticTacToe[x][y]='.';
    ticTacToe[1][1]='X';

    puts("Une partie de Tic-Tac-Toe ?");
    for(x=0; x<3; x++)
    {
        for(y=0; y<3; y++)
            printf("%c\t", ticTacToe[x][y]);
        putchar('\n');
    }
    
    return 0;
}
