#include <stdio.h>
#include <string.h>

/**
 * 
*/
char *_strcat(char *dest, char *src)
{
	int dsize, s_size, i, k;

	dsize = strlen(dest);
	s_size = strlen(src);
	i = 0;
	k = dsize - 1;

	while (i < s_size)
	{
		dest[k] = src[i];
		k++;
		i++;
	}
	return (dest);
}