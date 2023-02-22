#include <stdio.h>

/**
 * print_alphabet_10 - procedure to print alphabet 10 times
 *
 * Return: Always void
 */

void print_alphabet_10(void)
{
	int counter = 0;
	char c = 'a';

	while (counter < 10)
	{
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}

		putchar('\n');

	}
}
