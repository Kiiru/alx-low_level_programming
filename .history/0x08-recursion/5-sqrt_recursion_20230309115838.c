#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * square_root_recursion - recursively finds a root
 * @start: int value. start of search
 * @end: int value. end of search
 * @m: the square we are searching the root for
*/
int square_root_recursion(int start, int end, int m)
{
	long mid;

	if (end > start)
	{
		mid = start + (end - start) / 2;

		if (mid * mid > m)
			return (square_root_recursion(start, mid - 1, m));
		if ()
	}
}

/**
 * _sqrt_recursion - operation to find the square root
 * @n: int square
 * Return: always the square root of x
 *
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0 || n == 1)
		return (n);
	return (square_root_recursion(2, n, n));
}