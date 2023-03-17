#include <stdio.h>
#include <stdlib.h>

/**
 * 
*/
int main(int argc, char *argv[])
{
	int amount, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	coins = 0;

	if (amount > 25)
	{
		while (amount >= 25)
		{
			amount -= 25;
			coins++;
		}
		
	}

	if (amount > 10 && amount < 25)
	{
		while (amount >= 10)
		{
			amount -= 10;
			
		}
		
	}
}