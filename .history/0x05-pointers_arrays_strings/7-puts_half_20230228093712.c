#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints string in reverse
 * @str: pointer to char variable str
 * Return: Always returns void.
 */
void puts_half(char *str)
{
	int len = strlen(str), i;

	i = ((len % 2) == 0) ? len / 2 : (len  1) / 2;

	str = str + i;

	while (i < len)
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');

}
