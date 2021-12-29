#include <stdio.h>

int main()
{

	char tictactoe[3][3][3];
	int x,y,z;

	/*initialize the matrix */
	x=0; 
	while(x<3)
	{
		y=0;
		while(y<3)
		{
			z=0;
			while(z<3)
			{
				tictactoe[x][y][z]='.';
				z++;
			}
			y++;
		}
		x++;
	}
	tictactoe[1][1][1]='X'; // Setting X at coordonates

	/*displaying the board game*/
	z=0;
	while(z<3)
	{	
		printf("Level %d\n", z+1);
		x=0;
		while(x<3)
		{
			y=0;
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
