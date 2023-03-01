#include <stdio.h>
#include <string.h>

/**
 * _strcat - operation to concatinate two strings
 * @dest: origi
 * 
*/
char *_strcat(char *dest, char *src)
{
	int dsize, s_size, i, k;

	dsize = strlen(dest);
	s_size = strlen(src);
	i = 0;
	dest[dsize - 1] = ' ';
	k = dsize;

	while (i < s_size)
	{
		dest[k] = src[i];
		k++;
		i++;
	}

	return (dest);
}