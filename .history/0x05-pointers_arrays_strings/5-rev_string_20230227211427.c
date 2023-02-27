#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - prints string in reverse
 * @s: pointer to char variable s
 * Return: Always returns void.
 */
void rev_string(char *s)
{
	int len = strlen(s), i;
	char rs[len];

	strcpy(rs, s);

	s = &s[len -i];

	for (i = 0; i < len; i++)
	{
		rs[i] = *s;
		s--;
	}

	strcpy(s, rs);
	
}