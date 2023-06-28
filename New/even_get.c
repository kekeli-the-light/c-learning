#include <unistd.h>
#include <stdio.h>

void even_get(int num)
{
	if ( num % 2 == 0 )
	{
		printf("Even number\n");
	}
	else
	{
		printf("Odd number\n");
	}
}
