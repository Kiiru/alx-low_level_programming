#include <stdio.h>

/**
 * main - function body
 *
 * Return: always void
 *
 */
int main(void)
{
	int i = 1, j = 100;

	while (i <= j)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
