#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_number - operation to encode string
 * @n: pointer to string array
 * Return: always void
 *
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n%10 + '0');
}
