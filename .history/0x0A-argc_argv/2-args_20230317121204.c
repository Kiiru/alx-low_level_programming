#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of arguments
 * @argv: pointer to array of arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("argv[%d] = %s\n", argv[counter]);

	return (EXIT_SUCCESS);
}
