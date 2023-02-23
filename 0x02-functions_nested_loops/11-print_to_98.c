#include <stdio.h>

/**
 * print_to_98 - prints integers to 98
 *
 * @n: integer value
 *
 * Return: returns void
 *
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);

			n++;
		}
	}
}
