#include <stdio.h>

int main()
{
	struct player
	{
		char playerName[32];
		int scoreMax;
	};

	struct player xbox;

	printf("Player's name ?: ");
	scanf("%s", xbox.playerName);
	printf("What is your best score ?: ");
	scanf("%d",&xbox.scoreMax);

	printf("Hello %s, your best score is %d.\n", xbox.playerName, xbox.scoreMax);
	return(0);
}
