#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints string in reverse
 * @str: pointer to char variable str
 * Return: Always returns void.
 */
void puts2(char *str)
{
	int len = strlen(str), i;
	
	for (i = 0; i < len; i++)
	{
		if ((i % 2) == 0)
        {
            _putchar(*str);
        }
        str++;
    }

    _putchar('\n');

}