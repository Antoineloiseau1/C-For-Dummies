#include <stdio.h>

int main()
{
	struct player
	{
		char playerName[32];
		int scoreMax;
		float ingameTime;
	}xbox;


	printf("Player's name ?: ");
	scanf("%s", xbox.playerName);
	printf("What is your best score ?: ");
	scanf("%d",&xbox.scoreMax);
	printf("How many time did you spend in the game ?: ");
	scanf("%f", &xbox.ingameTime);

	printf("Hello %s, your best score is %d, you spent %.2f hours in the game.\n", xbox.playerName, xbox.scoreMax, xbox.ingameTime);
	return(0);
}
