#include <stdio.h>

/**
 * _isupper - function to check if a character is uppercase
 * @c: int ASCII value of a character
 * Return: returns an int: 1 if is upercase or 0 if its something else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
