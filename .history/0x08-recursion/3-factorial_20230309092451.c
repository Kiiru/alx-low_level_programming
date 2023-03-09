#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * factorial - operation to return the factorial of n (n!)
 * @n: input for factorial
 * Return: always the factorial or -1 for less than 0
 *
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
		
	return (n * factorial(n - 1));
}
