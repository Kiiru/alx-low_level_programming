#include "main.h"

/**
 * print_binary - Operation to print binary value of int
 * @n: Int input value
 * Return: always void
*/
void print_binary(unsigned long int n)
{
	int i, flag;

	if (n == 0)
		_putchar('0');
	for (flag = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> 1) & 1)
			flag = 1;
		if (flag == 1)
			((n >> 1) & 1) ? _putchar('1') : _putchar('0');
	}
}
