#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789123";
    puts_half(str);
    return (0);
}

void _putchar(char c)
{
    putchar(c);
}