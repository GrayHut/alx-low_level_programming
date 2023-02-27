#include "main.h"

/**
 * swap_int - swaps value of address of pointer 'a'
 * with 'b' and viceversa.
 *
 * @a: pointer to an integer data-type;
 * @b: pointer to an integer data-type;
 * Return: always 0.
 */

void swap_int(int *a, int *b)
{
	int prov;

	prov = *a;
	*a = *b;
	*b = prov;
}
