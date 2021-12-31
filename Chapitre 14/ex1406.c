#include <stdio.h>

#define PLAYER_NUMBER 4

int main()
{
	struct scores
	{
		char name[32];
		int score;
	}player[PLAYER_NUMBER];

	int it=0;

	while(it<PLAYER_NUMBER)
	{
		printf("Enter #%d player's name: ", it+1);
		scanf("%s", player[it].name);
		printf("What is player's #%d score ?: ", it+1);
		scanf("%d", &player[it].score);
		it++;
	}

	printf("\n***Player's informations:***\n\n");

	it=0;
	while(it<PLAYER_NUMBER)
	{
		printf("Player #%d is %s, his best score is %d\n", it+1, player[it].name, player[it].score);
		it++;
	}

	return(0);
}
