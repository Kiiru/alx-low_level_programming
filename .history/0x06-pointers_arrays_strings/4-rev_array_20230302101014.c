#include <stdio.h>
#include <string.h>

/**
 * reverse_array - operation to reverse
 * @a: integer array
 * @n: size of array
 * Return: always void
 *
*/
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
