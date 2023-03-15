#include <stdio.h>

/**
 * _isdigit - procedure to check if a value is a digit btwn 0 - 9
 * @c: input digit
 * Return: return 1 if its a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
