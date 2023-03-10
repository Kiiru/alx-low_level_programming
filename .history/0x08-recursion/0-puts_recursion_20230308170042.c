#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts_recursion - operation to print a string
 * @s: pointer to string array
 * Return: always nothing
 *
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion();
}
