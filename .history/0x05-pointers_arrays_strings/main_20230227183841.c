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
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);

    return (0);
}

void _putchar(char c)
{
    printchar
}