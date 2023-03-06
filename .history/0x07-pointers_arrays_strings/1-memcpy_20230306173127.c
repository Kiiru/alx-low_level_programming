#include <stdio.h>
#include <string.h>

/**
 * _memcpy - operation to copy var1 to var2
 * @dest: pointer to string array
 * @src: char
 * @n: int
 * Return: always pointer to dest
 *
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}