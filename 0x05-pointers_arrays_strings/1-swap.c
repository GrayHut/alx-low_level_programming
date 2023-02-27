#include "main.h"

/**
 *wap_int(int *a, int *b) - swaps value of address of pointer 'a'
 *with 'b' and viceversa.

 *@a and @b: - are integer pointers
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
