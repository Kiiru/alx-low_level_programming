#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints the 24hr clock
 *
 * @void: accepts nothing
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h;

	for (h = 0; h < 24; h++)
	{
		int m = 0;

		while (m < 60)
		{
			if (h < 10)
			{
				putchar('\0');
			}
			putchar(h);
			putchar(':');
			if (m < 10)
			{
				putchar('\0');
			}
			putchar(m);
			putchar('\n');
			m++;

		}
	}
}
