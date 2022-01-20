#include <stdio.h>
#include <string.h>

int main()
{
	char *fruits[]={
		"abricot",
		"banane",
		"ananas",
		"pomme",
		"kaki",
		"poire",
		"myrtille"
	};

	char *temp;
	int a, b ,x;

	a = 0;
	while(a<6)
	{
		b=a+1;
		while(b<7)
		{
			if(strcmp(*(fruits+a), *(fruits+b))>0)
			{
				temp = *(fruits+a);
				*(fruits+a)=*(fruits+b);
				*(fruits+b)=temp;
			}
			b++;
		}
		a++;
	}

	x=0;
	while(x<7)
		puts(fruits[x++]);
	return(0);
}
