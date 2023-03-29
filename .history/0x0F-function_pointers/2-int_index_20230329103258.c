#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
#include <string.h>

/**
 * int_index - Operation that executes function on each element of array
 * @array: int array
 * @size: size of @array
 * @cmp: pointer to function
 * Return: void
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size > 0 && cmp != NULL)
	{
		int i = 0;

		while (i < size)
	}
	return 
}