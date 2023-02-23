#include <stdio.h>
#include "main.h"

/**
 * print_times_table - computes and prints the nth times table
 * @n: int value of the the n table
 * Return: void
 */
void print_times_table(int n)
{
	int x = 0, y, z;

	if (n > 15 || n < 0)
		return;
	while (x <= n)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (z > 99)
			{
				putchar(z / 100 + '0');
				putchar((z / 10 % 10) + '0');
				putchar(z % 10 + '0');
			}
			else if (z > 9)
			{
				putchar(' ');
				putchar(z / 10 + '0');
				putchar(z % 10 + '0');
			}
			else if (y != 0)
			{
				putchar(' ');
				putchar(' ');
				putchar(z + '0');
			}
			else
				putchar(z + '0');

			if (y != n)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		x++;
	}
}

