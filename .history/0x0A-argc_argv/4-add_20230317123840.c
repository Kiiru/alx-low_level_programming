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

	return (n);
}


int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = num_check(argv[i]);
		if (num)
	}
}