#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - copys characters
 * @dest: pointer to char variable a
 * @src: number of char to be printed
 * Return: Always returns void.
 */
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src), i;

	for (i = 0; i < len; i++)
	{
		if (*src != '\0')
		{
			dest[i] = *src;
		}
		src++;
	}
	

	return (dest);
}
