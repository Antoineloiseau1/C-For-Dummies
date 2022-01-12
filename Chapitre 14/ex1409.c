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

	struct id
	{
		char firstname[18];
		char lastname[18];
	};

	struct humain
	{
		struct id name;
		struct birth birthday;
	}president;

	strcpy(president.name.firstname, "Antoine");
	strcpy(president.name.lastname, "Loiseau");
	president.birthday.day=05;
	strcpy(president.birthday.month, "June");
	president.birthday.year=1991;

	printf("%s %s was born on %s the %dth of %d.\n", president.name.firstname, president.name.lastname, president.birthday.month, president.birthday.day, president.birthday.year);

	return(0);
}
