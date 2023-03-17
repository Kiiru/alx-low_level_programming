#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * num_check - Checks claim of a string to be int
 * @c: character array
 * Returns: int num or -1
*/
int num_check(char *c)
{
	int i = 0, n = 0, l = strlen(c);

	while (i < l)
	{
		if (c[i] < '0' || c[i] > '9')
			return (-1);

		n = n * 10 + (c[i] - '0');
		i++;
	}

	return (n);
}

/**
 * main - Sums int params
 * @argc: size of arguments
 * @argv: pointer to array of arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = num_check(argv[i]);
		if (num == -i)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
