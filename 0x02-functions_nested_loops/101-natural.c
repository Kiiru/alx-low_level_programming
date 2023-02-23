#include <stdio.h>

/**
 * main - main block
 * Description: Computes all natural numbers deivisible by 3 and 5 under 1024
 * Return: always returns (0)
 */
int main(void)
{
	int s = 0;
	int i = 1;

	while (i < 1024)
	{
		if ((i % 3) == 0)
			s += i;
		else if ((i % 5) == 0)
			s += i;

		i++;
	}
	printf("%d\n", s);

	return (0);
}
