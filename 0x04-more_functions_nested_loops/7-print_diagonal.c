#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - operation to draw diagnal lines
 *
 * @n: int length of diagonal
 *
 * Return: always void
 *
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_printchar('\n');
	else if (n == 1)
		_putchar('\\');
	else
	{
		int i = 0;

		while (i < (n - 1))
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
