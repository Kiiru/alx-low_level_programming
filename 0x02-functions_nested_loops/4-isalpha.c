#include <stdio.h>

/**
 * _isalpha - procedure to check if a char is an alphabet
 * @c: char input
 * Return: return 1 if c is an alphabet else 0
 */
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c >= 65 && c <=90))
		return (1);
	return (0);
}

