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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	i += 1;
	dest[i] = '\0';
	
}
