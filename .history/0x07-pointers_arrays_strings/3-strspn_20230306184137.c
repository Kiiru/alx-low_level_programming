#include <stdio.h>
#include <string.h>

/**
 * _strspn - operation to find c in s
 * @s: pointer to string array
 * @acc: char
 * Return: always pointer to matching char
 *
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
		if (s[i] == accept[j])
			length++;
		if (accept[j] == '\0')
			return (length);
	}
	return (length);
}
