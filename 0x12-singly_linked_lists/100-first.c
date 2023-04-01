#include <stdio.h>
/**
 *@first:function executed before main.
 *Return:nothing
 */

void _attribute_ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(", \nI bore my house upon my back!\n");
}
