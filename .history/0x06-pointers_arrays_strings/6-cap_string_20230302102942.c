#include <stdio.h>
#include <string.h>

/**
 * cap_string - operation to capitalize string
 * @s: pointer to string array
 * Return: always capitalized @s
 *
*/
char *cap_string(char *s)
{
	char special_chars[] = ",.;!?\"(){}\t\n ";
	int i, j, t;

	for (i = 0, t = 0; s[i] != '\0'; i++)
	{
		if (s[0] > 96 && s[0] < 123)
			t = 1;
		for (j = 0; special_chars[j] != '\0'; j++)
		{
			if (t)
			{
				if (s[i] > 96 && s[i] < 123)
				{
					s[i] -= 32;
					t = 0;
				}
				else if (s[i] > 64 && s[i] < 91)
				{
		
				}
			}
		}
	}
}