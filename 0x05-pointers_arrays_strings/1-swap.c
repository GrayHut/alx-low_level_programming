#include "main.h"

/**
 *wap_int(int *a, int *b) - swaps value of address of pointer 'a'
 *with 'b' and viceversa.

 *@a and @b: - are integer pointers
 *Return: always 0
 */

void swap_int(int *a, int *b)
{
	int prov;
	prov = *a;
	*a = *b;
	prov = *b;
}
