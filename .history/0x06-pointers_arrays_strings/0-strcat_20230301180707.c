#include <stdio.h>
#include <string.h>

/**
 * 
*/
char *_strcat(char *dest, char *src)
{
	int dsize, s_size, i;

	dsize = strlen(dest);

	s_size = st


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