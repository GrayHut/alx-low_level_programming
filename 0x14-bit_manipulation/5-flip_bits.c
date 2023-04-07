#include "main.h"

/**
 *flip_bits-> function returns number of bits needed to flip to get from
 *one number to another.
 *@n: argument holding the binary value.
 *@m: number of bitts needed to flip.
 *Return: unsigned integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int j;

	unsigned long int  present;
	unsigned long int  x;

	j = 0;
	i = 63;
	x = (n ^ m);

	while (i >= 0)
	{
		present = x >> i;

		if (present & 1)
		{
			j++;
		}

		i--;
	}

	return (j);
}
