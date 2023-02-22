#include <stdio.h>

/**
 * print_alphabet_x10 - procedure to print alphabet 10 times
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 10; i++)
	{
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		c = 'a';
		putchar('\n');
	}
}
