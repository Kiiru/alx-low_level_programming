#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of size @max
 * @min: min array value
 * @max: max array value
 * Return: array
 **/
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		
	}
}