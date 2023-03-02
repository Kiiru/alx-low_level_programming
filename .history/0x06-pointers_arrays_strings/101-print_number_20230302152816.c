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
		_putchar('-');
		num = -n;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar(n % 10 + '0');
}
