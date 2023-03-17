#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 
*/
int num_check(char *c)
{
	int i = 0, n = 0, l = strlen(c);

	while (i < l)
	{
		if (c[i] < '0' || c[i] > '9')
			return (-1);
		else
			n = n * 10 + (c[i] - '0');
		i++;
	}

	return (n)
}