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
	int i ;

	while (*s != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		s++;
		i++;
	}
	return (0);
}
