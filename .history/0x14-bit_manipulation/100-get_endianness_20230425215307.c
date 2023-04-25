#include "main.h"

/**
 * get_endianness - Operation to check endianness
 *
 * @Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *)&i;
	if (*c == 1)
		return (1);
	else
		return (0);
}
