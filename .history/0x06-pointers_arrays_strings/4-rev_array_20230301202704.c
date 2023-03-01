#include <stdio.h>
#include <string.h>

/**
 * reverse_array - operation to concatinate two strings
 * @a: integer array
 * @n: size of array
 * Return: The comparison
 *
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = n -1; i >= 0; i--)
	{
		if (i != 0)
		{
			printf("%d, ", a[i]);
		}

		printf("%d", a[i]);
	}

	printf()
}