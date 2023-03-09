#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * recursive_search - recursively tries to find out if n is prime
 * @n: integer value
 * @i: incremental valu
 * Return: 1 if n is a prime number, otherwise return 0
*/
int recursive_search(int i, int n)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	
	return (recursive_search(i+1, n));
}

/**
 * is_prime_number - recursively tries to find out if n is prime
 * @n: integer value
 * Return: 1 if n is a prime number, otherwise return 0
*/
int is_prime_number(int n)
{
	if (n == 0 || n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (recursive_search(2, n));
}
