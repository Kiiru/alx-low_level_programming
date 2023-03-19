#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - operation to concatinate two strings
 * @s1: string one
 * @
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, k, c;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	};
	j++;
	c = 0;
	k = i + j;
	s1 = (char *) realloc(s1, sizeof(char) * k);
	if (s1 == NULL)
		return (NULL);
	i++;
	while (s2[c] != '\0')
	{
		s1[i] = s2[c];
		i++;
		c++;
	}
	s1[k - 1] = '\0';

	return (s1);
}
