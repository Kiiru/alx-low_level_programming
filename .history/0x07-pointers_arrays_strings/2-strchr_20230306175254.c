#include <stdio.h>
#include <string.h>

/**
 * _strchr - operation to copy var1 to var2
 * @dest: pointer to string array
 * @src: char
 * @n: int
 * Return: always pointer to dest
 *
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (*s);
		}
		s++;
	}
	return (s);
}