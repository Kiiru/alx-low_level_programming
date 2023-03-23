#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory using calloc
 * @nmemb: int var
 * @size: mem size
 * Return: pointer to new space in memory or null
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *st;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	st = calloc(nmemb, size);
	
	
}