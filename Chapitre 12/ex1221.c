#include <stdio.h>

int main()
{

	char tictactoe[3][3][3];
	int x=0, y=0, z=0;

	/*initialize the matrix */
	while(x<3)
	{
		while(y<3)
		{
			while(z<3)
			{
				tictactoe[x][y][z] = '.';
				z++;
			}
			y++;
		}
		x++;
	}
	tictactoe[1][1][1]='X'; // Setting X at coordonates

	/*displaying the board game*/
	puts("Let's play Tic Tac Toe 3D");
	x=0; y=0; z=0;
	while(z<3)
	{
		printf("Level %d\n", z+1);
		while(x<3)
		{
			while(y<3)
			{
				printf("%c\t", tictactoe[x][y][z]);
				y++;
			}
			putchar('\n');
			x++;
		}
		z++;
	}
	return(0);
}	
