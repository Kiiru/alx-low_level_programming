#include <stdio.h>

/**
 * 
*/
char *_strcat(char *dest, char *src)
{
	int 



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