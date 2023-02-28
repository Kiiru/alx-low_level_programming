#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints string in reverse
 * @s: pointer to char variable s
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