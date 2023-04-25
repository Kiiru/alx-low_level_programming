#include <main.h>

/**
 * set_bit - Operation to set the value of a bit to 1 at
 * a given index
 * @n: int value
 * @index: bit index to change
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n
}