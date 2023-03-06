#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * _strpbrk - operation to find c in s
 * @s: pointer to string array
 * @accept: char
 * Return: always pointer to matching char
 *
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
