#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: int lenght of line
 *
 * Return: returns void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
