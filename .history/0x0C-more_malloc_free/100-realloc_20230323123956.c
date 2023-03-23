#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Operation to reallocate a memory block
 * using malloc and free
 * @ptr: pointer to memory block
 * @old_size: old size of ptr
 * @new_size: new size to be reallocated
 * Return: pointer to reallocated memory block
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	
		ptr = malloc(new_size)
}