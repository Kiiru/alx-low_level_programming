#include "main.h"

/**
 * clear_bit - Operation to set the value of a bit to 0 at a given index
 * @index: index of bit
 * @n: pointer to int value
 * Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}