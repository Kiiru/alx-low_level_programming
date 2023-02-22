#include <stdio.h>

/**
 * print_sign - procedure to check if a char is an alphabet
 * @n: int input
 * Return: return 1 if c is an alphabet else 0
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	return (-1);
}
