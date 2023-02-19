#include <stdio.h>

/*
 * name: main
 *
 * Description: Size is not grandeur, and territory does not make a nation
 *
 * returns: 0
 *
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long));
	printf("Size of long long int: %lu byte(s)\n", sizeof(unsigned long));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}

