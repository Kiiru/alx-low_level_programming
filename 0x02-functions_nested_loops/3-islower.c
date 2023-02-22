#include <stdio.h>

/**
 * _islower - procedure to check case of a char
 *
 * Return: Always void
 */
int _islower(int c)
{
	char d = c + '0';
	if (d <= 'z' && d >= 'a')
		return 1;
		
	return 0;
}
