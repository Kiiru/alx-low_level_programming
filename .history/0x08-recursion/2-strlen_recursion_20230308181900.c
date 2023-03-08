#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - operation to return a string length
 * @s: pointer to string array
 * Return: always nothing
 *
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s += 1;

	return ((1 + _strlen_recursion(s)));
}
