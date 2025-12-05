#include <stdio.h>

int main()
{
	int i;
	scanf("%d",&i);
	while(1)
	{

		for(i=10; i>=1; i--)
		{
			printf("Red: %d\n", i);
		}

		for(i=3; i>=1; i--)
		{
			printf("Yellow: %d\n", i);
		}

		for(i=7; i>=1; i--)
		{

			printf("Green: %d\n", i);
		}
	}

	return 0;
}
