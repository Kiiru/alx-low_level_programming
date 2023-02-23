#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 *
 * Return: returns void
 *
 */
void more_numbers(void)
{
	int i = 0, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j < 15)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
	}
}
