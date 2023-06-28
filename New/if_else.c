#include <stdio.h>

int main(void)
{
	int m;

	scanf("%d", &m);

	if (m >= 20)
	{
		printf("Number too High\n");
		if (m % 2 == 0)
		{
			printf("Number is a High Even Number\n");
		}
		else
		{
			printf("Number is a High Odd Number\n");
		}
	}
	else
	{
		printf("Number too low\n");
	}

	return (0);
}


