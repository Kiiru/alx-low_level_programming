#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - operation to concatinate two strings
 * @s1: string one
 * @s2: String two
 * Return: Concatinated String
*/
char *str_concat(char *s1, char *s2)
{
	char *dup;
	int i, j, k;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
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
	k = i + j;
	dup = (char *) realloc(s1, sizeof(char) * k);
	while (s2[c] != '\0')
	{
		s1[i] = s2[c];
		i++;
		c++;
	}
	s1[k - 1] = '\0';

	return (s1);
}
