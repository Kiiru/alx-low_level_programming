#include <stdio.h>
/**
 * set_string - a function that sets pointer to pointer
 * @s: pointer pointer
 * @to: pointer
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	**s = to;
	s = &to;
}
