#include <stdio.h>
#include <string.h>

/**
 * _strncat - operation to concatinate two strings
 * @dest: original string
 * @src: source string
 * @n: nth bit of src
 * Return: Always dest
 *
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j, k;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
