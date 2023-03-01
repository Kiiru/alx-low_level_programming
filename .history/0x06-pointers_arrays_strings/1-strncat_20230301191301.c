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

	while (dest[] != '\0')
	{
		i++;
		dest++;
	}

	j = i + 1;

	dest[j] = ' ';

	j += 1;

	k = (n >> (8*n)) & 0xff;

	for (i = 0; i < k; i++)
	{
		dest[j] = src[i];
		j++;
	}

	return (dest);
}
