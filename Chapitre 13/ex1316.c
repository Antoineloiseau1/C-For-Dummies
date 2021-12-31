#include <stdio.h>

int main()
{
	char presidentUSA[4][2][12] = {
		"George", "Washington",
		"John", "Adams",
		"Thomas", "Jefferson",
		"James", "Monroe"};
	int loop = 0;

	while(loop<4)
	{
		printf("%-6s %-25s\n", presidentUSA[loop][0], presidentUSA[loop][1]); 
		loop++;
	}

	/*int x, y, z;
	x=0;

	while(x<4)
	{
		y=0;
		while(y<2)
		{
			z=0;
			while(presidentUSA[x][y][z])
			{
				printf("%c", presidentUSA[x][y][z]);
				z++;
			}
			putchar('\t');
			y++;
		}
		putchar('\n');
		x++;
	} */

	return(0);
}
