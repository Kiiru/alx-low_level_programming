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
				printf("%d", 0);
			}
			printf("%d", h);
			printf(":");
			if (m < 10)
			{
				printf("%d", 0);
			}
			printf("%d", m);
			printf("\n");
			m++;

		}
	}
}
