#include "main.h"

/**
 * swap_int - reset value to 98
 * @n: pointer to variable n
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}