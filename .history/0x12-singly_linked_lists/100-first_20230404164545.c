#include <stdio.h>

void before_main(void) __attribute__((constructor));
/** void after_main() __attribute__((destructor)); */
/**
 * before_main - Operation run before main
 * Return: void
*/
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
