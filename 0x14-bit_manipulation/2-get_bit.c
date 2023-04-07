#include "main.h"

/**
 *get_bit-> function returns the value of a bit at a given index.
 *@n: binary number argument.
 *@index: bit positions.
 *Return: value of bit at index (if successful) and -1 (incase of failure).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int binary;

	if (index > 63)
	{
		return (-1);
	}

	binary = n >> index & 1;

	return (binary);
}
