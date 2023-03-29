#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
#include <string.h>

/**
 * int_index - Operation that searches for an integer
 * @array: int array
 * @size: size of @array
 * @cmp: pointer to function
 * Return: index of the integer if found else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size > 0 && cmp != NULL)
	{
		int i = 0, j;

		while (i < size)
		{
			j = cmp(array[i]);
			if (j ! 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
