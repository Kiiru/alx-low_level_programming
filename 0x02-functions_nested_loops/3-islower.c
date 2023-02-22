#include <stdio.h>

/**
 * _islower - procedure to check case of a char
 *
 *@c: char input
 *
 * Return: return 1 if is lowercase else 0 
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
		
	return (0);
}
