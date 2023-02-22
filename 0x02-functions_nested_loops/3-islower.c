#include <stdio.h>

/**
 * _islower - procedure to check case of a char
 *
 * Return: Always void
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
		return 1;
		
	return 0;
}
