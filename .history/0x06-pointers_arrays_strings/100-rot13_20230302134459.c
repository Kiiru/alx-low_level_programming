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
			k = (((s[i]-'a')+13)%26)+'a';
		}

		if ((s[i] > 96 && s[1] < 123) || (s[i] > 64 && s[1] < 91))
		{
			k = s[i] + 13;
			k = (k > 90 && k <= 103) ? (64 + (k - 90)) : k;
			k = (k > 122 && k <= 135) ? (96 + (k - 122)) : k;

			s[i] = k;
		}
	}

	return (s);
}
