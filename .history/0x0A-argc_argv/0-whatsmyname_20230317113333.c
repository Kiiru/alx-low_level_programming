#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc:
 * @argv: pointe
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (EXIT_SUCCESS);
}
