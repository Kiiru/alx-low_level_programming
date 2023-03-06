#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - operation to find c in s
 * @haystack: pointer to string array
 * @needle: char
 * Return: always pointer to matching char
 *
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

	_putchar('\n');
	}
}