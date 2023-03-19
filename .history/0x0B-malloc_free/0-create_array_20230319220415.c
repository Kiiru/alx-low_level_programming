#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: initializing char
 * Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char cr;

	if (size == 0)
		return (NULL);

	cr = (char *) malloc(sizeof(char) * size);
	if (cr == NULL)
		return (NULL);

	cr = c;

	return (cr);
}
