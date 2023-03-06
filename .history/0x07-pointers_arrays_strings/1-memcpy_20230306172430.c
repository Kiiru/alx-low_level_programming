#include <stdio.h>
#include <string.h>

/**
 * _memset - operation to fill mem with char
 * @dest: pointer to string array
 * @src: char
 * @n: int
 * Return: always encoded String
 *
*/
char *_memcpy(char *dest, char *src, unsigned int n) {
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	
}