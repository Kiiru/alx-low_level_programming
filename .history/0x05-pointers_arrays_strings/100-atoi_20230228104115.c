#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Return: converted integer
 */

int _atoi(char *s)
{
	int i;
	int j, p;

	j = 0;
	p = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			p *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (j < 0)
				j = (j * 10) - (s[i] - '0');
			else
				h = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (p < 0)
		h *= -1;

	return (h);
}
