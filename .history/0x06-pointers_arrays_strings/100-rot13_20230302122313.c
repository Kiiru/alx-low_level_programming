#include <stdio.h>
#include <string.h>

/**
 * rot13 - operation to encode string
 * @s: pointer to string array
 * Return: always encoded String
 *
*/
char *rot13(char *s)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 96 && s[1] < 123) || (s[i] > 64 && s[1] < 91) )
		{
			k = s[i] + 13;
			k
		}
	}
}