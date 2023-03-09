#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - operation to print a string in reverse
 * @s: pointer to string array
 * Return: always nothing
 *
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	// _set_pointer(s);

	// if (s == &s[0])
	// {
	// 	_putchar(*s);
	// 	return;
	// }

	// _putchar(*s);
	// s--;
	// _print_rev_recursion(s);
}

void _set_pointer(char *s)
{
	if(*s == '\0')
	{
		return;
	}
	s++;
	_set_pointer(s);
}