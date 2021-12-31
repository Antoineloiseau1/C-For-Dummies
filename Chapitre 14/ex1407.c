#include <stdio.h>

#define PLAYER_NUMBER 4

int main()
{
	struct scores
	{
		char name[32];
		int score;
	}player[PLAYER_NUMBER], temp[PLAYER_NUMBER];

	int x=0;
	while(x<PLAYER_NUMBER)
	{
		printf("Enter #%d player's name: ", x+1);
		scanf("%s", player[x].name);
		printf("What is player's #%d score ?: ", x+1);
		scanf("%d", &player[x].score);
		x++;
	}

	//Give Andrea her medal back !!!
	
	int tempScore,y;
	x=0;
	while(x<PLAYER_NUMBER-1)
	{	
		y=x+1;
		while(y<PLAYER_NUMBER)
		{
			if(player[x].score < player[y].score)
			{
				temp[x]=player[x];
				player[x]= player[y];
				player[y]=temp[x];
			}
			y++;
		}
		x++;
	}


	printf("\n***Player's informations:***\n\n");

	x=0;
	while(x<PLAYER_NUMBER)
	{
		printf("Player #%d is %s, best score is %d\n", x+1, player[x].name, player[x].score);
		x++;
	}

	return(0);
}
