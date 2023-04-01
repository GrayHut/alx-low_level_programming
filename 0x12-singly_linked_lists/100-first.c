#include <stdio.h>

/**
 * precede - executes before the main function
 */

void __attribute__ ((constructor)) precede()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
