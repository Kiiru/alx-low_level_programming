#include <stdio.h>

void before_main(void) __attribute__((constructor));
/** void after_main() __attribute__((destructor)); */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
/**
 * void after_main() {
 * printf("This is executed after main.");
 * }
*/
