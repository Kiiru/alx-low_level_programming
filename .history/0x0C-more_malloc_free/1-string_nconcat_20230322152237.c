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
	int s1Len, s2Len, byteSize;

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL || n == NULL)
		return (s1);
	/*Get the length of s1*/
	s1Len = 0;
	while (*s1 != '\0')
		s1Len++;
	/*Get the length of s2*/
	s2Len = 0;
	while (*s2 != '\0')
		s2Len++;
	
	if (n >= s2Len)
		byteSize = s1Len + s2Len;
	else
		byteSize = s
	
}