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

	strcpy()

	s = &s[len - 1];

	for (i = 0; i < len; i++)
	{
		rs[i] = *s;
		s--;
	}

	s = &rs;
}