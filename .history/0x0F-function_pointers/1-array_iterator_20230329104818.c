#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
#include <string.h>

/**
 * array_iterator - Operation that executes function on each element of array
 * @array: int array
 * @size: size of @array
 * @action: pointer to function
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL && size > 0 && array !=NULL)
	{
		long unsigned int i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
