#include <stdio.h>
#include <string.h>

/**
 * _strcmp - operation to concatinate two strings
 * @s1: original string
 * @s2: source string
 * Return: The comparison
 *
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
