#include <stdio.h>

int main()
{
	struct president
	{
		char name[32];
		int nomiYear;
	}pres1={"Georges Washington", 1789}, pres2={"John Adams", 1797};

	printf("The first president is: %s\n", pres1.name);
	printf("The year he was elected is: %d.\n", pres1.nomiYear);
	printf("The second president is: %s\n", pres2.name);
	printf("The year he was elected is: %d.\n", pres2.nomiYear);

	return(0);
}
