#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - operation to allocate memory using malloc
 * @b: size of memory
 * Return: number of words
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int counter = 0;

	while (s1[counter] != '\0')
	{
		printf("%c 1st\n", s1[counter]);
		counter++;
	}
	
	return(s2);
}