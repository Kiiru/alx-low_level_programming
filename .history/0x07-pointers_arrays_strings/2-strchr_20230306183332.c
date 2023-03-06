#include <stdio.h>
#include <string.h>

/**
 * _strchr - operation to find c in s
 * @s: pointer to string array
 * @c: char
 * Return: always pointer to matching char
 *
*/
char *_strchr(char *s, char c)
{
	char *i = NULL;

	while(*s != '\0')
	{
		if (*s == c)
		{
			i = &(*s);
			break;
		}
		s++;
	}
	return (i);
}
