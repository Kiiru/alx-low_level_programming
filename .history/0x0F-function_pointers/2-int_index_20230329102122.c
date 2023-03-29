#include <stdio.h>
#include <string.h>

/**
 * array_iterator - Operation that executes function on each element of array
 * @array: int array
 * @size: size of @array
 * @action: pointer to function
 * Return: void
*/
int int_index(int *array, int size, int (*cmp)(int));