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
	char *conc;
	unsigned int s1Len, s2Len, byteSize, counter, stopAt;

	printf("%c !!!!!!!!!!!!\n", s1[0]);

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
	/*Get the length of s1*/
	s1Len = 0;
	while (*s1 != '\0')
		s1Len++, s1++;
	printf("%d\n", s1Len);
	/*Get the length of s2*/
	s2Len = 0;
	while (*s2 != '\0')
		s2Len++, s2++;
	printf("%d\n", s2Len);
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