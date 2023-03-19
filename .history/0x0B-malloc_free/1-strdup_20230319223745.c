#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as
 * a parameter
 * @str: size of array
 * Return: a pointer * to a newly allocated space in memory,
*/
char *_strdup(char *str)
{
	char *c;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	c = (char *) malloc(sizeof(char) * i);

	if (c == NULL)
		return (NULL);

	while (str)
	{
		c[j] = str[j];
		j++;
	}

	c[size] = '\0';

	return (c);
}
