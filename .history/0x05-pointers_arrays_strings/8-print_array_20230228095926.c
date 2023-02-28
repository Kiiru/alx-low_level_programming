#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - prints string in reverse
 * @a: pointer to char variable a
 * @n: number of char to be printed
 * Return: Always returns void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d,", *a);
		else
			printf(" ")
	}
}