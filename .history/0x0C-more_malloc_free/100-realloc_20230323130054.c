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
	unsigned char *dupPtr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	dupPtr = malloc(sizeof(char) * new_size);
	i = 0;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			dupPtr[i] = ((char *) ptr)[i];
			i++;
		}
		free(ptr);
		return (dupPtr);
	}
	while (i < new_size)
	{
		dupPtr[i] = ((char *) ptr)[i];
		i++;
	}
	free(ptr);
	return (dupPtr);
}
