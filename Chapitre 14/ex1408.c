#include <stdio.h>
#include <string.h>

int main()
{
	struct birth
	{
		int day;
		char month[18];
		int year;
	};

	struct humain
	{
		char name[45];
		struct birth birthday;
	}president;

	strcpy(president.name, "Georges Washington");
	president.birthday.day=22;
	strcpy(president.birthday.month, "February");
	president.birthday.year=1732;

	printf("%s was born on %s the %dth of %d.\n", president.name, president.birthday.month, president.birthday.day, president.birthday.year);

	return(0);
}
