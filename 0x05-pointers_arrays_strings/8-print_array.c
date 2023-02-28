#include <stdio.h>
#include "main.h"

/**
 * print_array - print integer elements of an array
 * @n: number of array elements
 * @i: array of integers
 * Returns nothing
 */

void print_array(int *i, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", i[k]);

		if (k != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
