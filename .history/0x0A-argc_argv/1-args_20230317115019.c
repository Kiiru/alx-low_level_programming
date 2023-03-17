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
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
	{
		printf("%d\n", 0);
	}

	return (EXIT_SUCCESS);
}