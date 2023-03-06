#include <stdio.h>
#include <string.h>

/**
 * _strchr - operation to copy var1 to var2
 * @s: pointer to string array
 * @c: char
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