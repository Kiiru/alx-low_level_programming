#include <stdio.h>

/**
 * print_alphabet - check the code
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
