#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as
 * a parameter
 * @str: size of array
 * Return: a pointer * to a newly allocated space in memory,
*/
char *_strdup(char *str)
{
	char *c;
	int size;

	if (str == NULL)
		return (NULL);
	
	size = sizeof(str);
	c = (char *) malloc(size);
	if (c == NULL)
		return (NULL);
	
	for

}