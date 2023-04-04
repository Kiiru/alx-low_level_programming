#include <stdio.h>
/**
 * before_main - attribute definition
 * void after_main() __attribute__((destructor));
 * void after_main() {
 * printf("This is executed after main.");
 * }
*/

void before_main(void) __attribute__((constructor));

/**
 * before_main - Operation run before main
 * Return: void
*/
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
