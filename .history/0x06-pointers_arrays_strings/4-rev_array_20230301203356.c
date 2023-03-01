#include <stdio.h>
#include <string.h>

/**
 * reverse_array - operation to concatinate two strings
 * @a: integer array
 * @n: size of array
 * Return: always void
 *
*/
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = ; i >= 0; i--)
	{
		if (i != 0)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}

	printf("\n");
}
