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
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			k = (((s[i] -'a')+13)%26)+'a';
			s[i] = k;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			k = (((s[i]-'A')+13)%26)+'A';
			s[i] = k;
		}
	}

	return (s);
}
