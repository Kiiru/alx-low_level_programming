#include <stdio.h>
#include "main.h"

/**
 * times_table - computes the time table
 *
 * Returns: void
 */
void times_table(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			int t = i * j;

			if (t == 0 && j == 0)
			{
				printf("%d,", t);
				j++;
				continue;
			}
			if (t == 0 && i == 0)
			{
				(j == 9) ? printf("  %d", t) : printf("  %d,", t);
				j++;
				continue;
			}
			if (t < 10 && t > 0)
				printf("  ");
			else
				printf(" ");

			(j == 9) ? printf("%d", t) : printf("%d,", t);
			j++;
		}
		printf("\n");
		i++;
	}
}
