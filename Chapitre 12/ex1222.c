#include <stdio.h>

int main()
{
    char ticTacToe[3][3]= { '.', '.', '.', '.', 'X', '.', '.', '.', '.' };
   
   
    int x,y;
	/*
    for(x=0; x<3; x++)
        for(y=0; y<3; y++)
            ticTacToe[x][y]='.';
    ticTacToe[1][1]='X'; */

    x=0; 

    puts("Une partie de Tic-Tac-Toe ?");

    while(x<3 || y<3)
	{
		y=0;
    		while(y<3)
		{		
           		 printf("%c\t", ticTacToe[x][y]);
			 y++;
		}	 
       		putchar('\n');
		x++;
        }
    return 0;
}
