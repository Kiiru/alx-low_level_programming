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
		s1 = "";
	if (s2 == NULL)
		s2 = "";
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
	dup = (char *) malloc(sizeof(char) * k);
	
	i = j = 0;
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dup[i] = s2[j];
		i++, j++;
	}
	dup[i] = '\0';

	return (dup);
}
