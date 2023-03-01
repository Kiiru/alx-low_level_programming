#include <stdio.h>
#include <string.h>

/**
 * _strncpy - operation to concatinate two strings
 * @dest: original string
 * @src: source string
 * @n: nth bit of src
 * Return: Always dest
 *
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		j++;
	}

	return (dest);
}
