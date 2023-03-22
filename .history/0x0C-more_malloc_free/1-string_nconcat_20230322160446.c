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
	
	while (s1[counter] != '\0')
	{
		conc[counter] = s1[counter];
		printf("%c 1st\n", s1[counter]);
		counter++;
	}
	counter = 0;
	while (counter < stopAt)
	{
		conc[s1Len] = s2[counter];
		counter ++;
		s1Len ++;
	}
	return(conc);
}