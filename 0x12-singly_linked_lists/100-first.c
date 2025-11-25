#include <stdio.h>

/**
* _main - executes before main function using constructor attribute
*
* Description: Prints a message before the main function is executed
* using the GCC constructor attribute
*/

void _main(void) __attribute__((constructor));

/**
* _main - prints message before main execution
*/
void _main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
