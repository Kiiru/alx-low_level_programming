#include <stdio.h>
#include <string.h>

/**
 * _strstr - operation to find c in s
 * @haystack: pointer to string array
 * @needle: char
 * Return: always pointer to matching char
 *
*/
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}