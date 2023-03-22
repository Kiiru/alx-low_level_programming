#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - operation to allocate memory using malloc
 * @b: size of memory
 * Return: number of words
 **/
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);
	if (str == NULL)
		return (98);
	return (str);
}