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

		if (h < 10)
		{
			_putchar('0');
		}
		_putchar('h');
		while (m < 60)
		{
			_putchar(':');
			if (m < 10)
			{
				_putchar('0');
			}
			_putchar(m);
			_putchar('\n');
			m++;

		}
	}
}
