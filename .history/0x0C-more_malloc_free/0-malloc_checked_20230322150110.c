#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - operation to allocate memory using malloc
 * @b: size of memory
 * Return: number of words
 **/
void *malloc_checked(unsigned int b)
{
	void *p;
	
	return (malloc(b) ? malloc(b) : (98));
}