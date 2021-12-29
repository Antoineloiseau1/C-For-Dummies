#include <stdio.h>

int main()
{

	char tictactoe[3][3][3];
	int x,y,z;

	/*initialize the matrix */
	for(x=0; x<3; x++)
		for(y=0; y<3; y++)
			for(z=0; z<3; z++)
				tictactoe[x][y][z]='.';
	tictactoe[1][1][1]='X'; // Setting X at coordonates

	/*displaying the board game*/
	puts("Let's play Tic Tac Toe 3D");

	for(z=0; z<3; z++)
	{
		printf("Level %d\n", z+1);
		for(x=0; x<3; x++)
		{
			for(y=0; y<3; y++)
			{
				printf("%c\t", tictactoe[x][y][z]);
			}
			putchar('\n');
		}
	}










	/*x=0, y=0, z=0;
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
	}*/
	return(0);
}	
