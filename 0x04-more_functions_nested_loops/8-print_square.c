#include <stdio.h>
#include "main.h"

/**
 * print_square - operation to print a square 
 *
 * @size: length of square
 *
 * Return - always returns void
 *
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
