#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer to string
 * Return: length of string
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_prime_number - recursively tries to find out if n is prime
 * @n: integer value
 * Return: 1 if n is a prime number, otherwise return 0
*/
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion
}