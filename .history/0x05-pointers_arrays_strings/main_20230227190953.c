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
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);

    return (0);
}

void _putchar(char c)
{
    putchar(c);
}