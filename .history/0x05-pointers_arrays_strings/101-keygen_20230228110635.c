#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - operation body. gen random passwords
 *
 * Return: Always 0.
 */
int main(void)
{
	int _rand, i, t;

	srand ((unsigned) time(NULL));
	for (i = 0, t = 2772; t > 122; i++)
	{
		_rand = (rand() % 125) + 1;
		printf("%c", _rand);
		total -= _rand;
	}
}