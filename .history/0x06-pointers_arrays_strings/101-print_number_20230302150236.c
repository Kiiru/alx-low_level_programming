#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rot13 - operation to encode string
 * @s: pointer to string array
 * Return: always encoded String
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
	
	_putchar()
}