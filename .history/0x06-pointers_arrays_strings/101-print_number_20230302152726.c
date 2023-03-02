#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_number - operation to print number
 * @n: int to print
 * Return: always void
 *
*/
void print_number(int n)
{
	unsigned int num;
	num = n;
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
