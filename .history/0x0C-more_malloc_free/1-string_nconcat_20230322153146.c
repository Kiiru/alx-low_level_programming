#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - operation to allocate memory using malloc
 * @b: size of memory
 * Return: number of words
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	int s1Len, s2Len, byteSize, counter = 0, stopAt;

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL || n == NULL)
		return (s1);
	/*Get the length of s1*/
	s1Len = 0;
	while (*s1 != '\0')
		s1Len++, s1++;
	/*Get the length of s2*/
	s2Len = 0;
	while (*s2 != '\0')
		s2Len++, s2++;
	
	if (n >= s2Len)
		byteSize = (s1Len + s2Len), stopAt = s2Len;
	else
		byteSize = (s1Len + n), stopAt = n;
	conc = malloc(sizeof(char) * byteSize);
	if (conc == NULL)
		return (NULL);
	while (s1[counter] != '\0')
	{
		conc[counter] = s1[counter];
		counter++;
	}
	counter = 0;
	while (counter < stopAt)
	{
		conc[s1L]
	}
}