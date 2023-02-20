#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59, 1, stderr);
	fwrite("\n", sizeof(char), 1, stderr);
	exit(EXIT_FAILURE);
	return (1);
}
