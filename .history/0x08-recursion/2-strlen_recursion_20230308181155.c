#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - operation to print a string in reverse
 * @s: pointer to string array
 * Return: always nothing
 *
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (1);
	s += 1;

	return 1 + _strlen_recursion
}