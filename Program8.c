#include <stdio.h>

int main()
{
	int level;

	printf("Enter water level (0-100): ");
	scanf("%d", &level);

	printf("x(status): ");
	if(level < 10)
	{
		printf("low + alert + fill\n");
	}
	else if(level < 30)
	{
		printf("LOW +  fill\n");

	}

	else if(level>30 && level<= 70)
	{
		printf("medium\n");
	}
	else if(level=100)
	{
	    printf("high");
	}
	else
	{
		printf("high boundary\n");
	}
	if(level < 50)
	{
		printf("a: Start filling.\n");
	}
	else
	{
		printf("a: No need to fill.\n");
	}
	return 0;
}
