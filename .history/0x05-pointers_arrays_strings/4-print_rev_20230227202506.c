#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: pointer to char variable s
 * Return: Always returns void.
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	*s = s[len - 1];
	int i;

	printf("Length of String %d\n", _strlen(s));
	for (i = len; i > l; i++)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	// const int MAX = _strlen(s);
	// int i;

	// *s = s[MAX - 1];

	// for (i = MAX; i > 0; i--)
	// {
	// 	_putchar(*s);
	// 	s--;
	// }
	// _putchar('\n');
}
