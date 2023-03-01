#include <stdio.h>
#include <string.h>

/**
 * 
*/
char *_strcat(char *dest, char *src)
{
	int dsize, s_size, i;

	dsize = strl


	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (dest);
}