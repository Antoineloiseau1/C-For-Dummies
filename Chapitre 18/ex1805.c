#include <stdio.h>

int main()
{
	struct robot {
		int alive;
		char name[5];
		int xpos;
		int ypos;
		int strength;
	};

	printf("The size of robot struct: %lu\n", sizeof(struct robot));
	return(0);
}
