#include <stdio.h>
#include <string.h>

/**
 * string_toupper - operation to convert lowercase to upper
 * @n: pointer to string array
 * Return: always upper @n
 *
*/
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= '')
		i++;
	}
}