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
	const int len = strlen(s);
	int 
	char rs[len];

	strcpy(rs, s);
	s = &s[len - 1];
	for (i = 0; i < len; i++)
	{
		rs[i] = *s;
		s--;
	}
	s++;
	for (i = 0; i < len; i++)
	{
		*s = rs[i];
		s++;
	}
}
