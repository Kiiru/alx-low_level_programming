#include <stdio.h>
#include <string.h>

/**
 * leet - operation to encode string
 * @s: pointer to string array
 * Return: always capitalized String
 *
*/
char *leet(char *s)
{
	char upper[] = "AEOTL";
	char lower[] = "aeotl";
	char values[] = "";

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == upper[j] || s[i] == lower[j])
		}
	}
}