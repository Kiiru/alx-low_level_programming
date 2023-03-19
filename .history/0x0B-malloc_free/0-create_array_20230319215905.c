#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates char array of size 
*/
char *create_array(unsigned int size, char c)
{
	char *cr;

	if (size == 0)
		return (NULL);

	cr = (char *) malloc(sizeof(char) * size);
	if (cr == NULL)
		return (NULL);

	cr[0] = c;

	return (cr);
}