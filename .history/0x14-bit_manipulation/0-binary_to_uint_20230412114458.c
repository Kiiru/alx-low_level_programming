#include "main.h"
/**
 * binary_to_uint - Operation to convert binary number
 * to unsigned int
 * @b: binary char
 * Return: unsigned int or 0 on failure
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result, tmp, expo;
	
	if (b == NULL)
		return (0);
	result = tmp = 0;
	expo = 1;
	for (i = 0; b[i]; i++)
		;
	i = i - 1;
	while (b[i])
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		tmp = ((unsigned int) b[i] - '0');
		re
	}

}