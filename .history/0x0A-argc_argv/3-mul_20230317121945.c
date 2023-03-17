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
	int r;

	if ((argc) - 1 == 2)
	{
		printf("%d\n", ((int) argv[1] * (int) argv[2]));
		r = 0;
	}
	else
	{
		printf("Error\n")
	}
}
