#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - gets the last digit of int n
 * @n: integer
 * Return: returns the last digit of an integer
 */
int print_last_digit(int n)
{
	int remainder = (n >= 0) ? n % 10 : ((n % 10) * -1);

	_putchar(remainder + '0');

	return (remainder);
}
