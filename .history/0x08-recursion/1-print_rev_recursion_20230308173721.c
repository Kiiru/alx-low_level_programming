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
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
}

void _set_pointer(char *s)
{
	if(*s == '\0')
	{
		return;
	}
	s
}