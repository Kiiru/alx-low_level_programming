#include <stdio.h>

/**
 * 
*/
char *_strcat(char *dest, char *src)
{
	while (dest != '\0')
	{
		
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (dest);
}