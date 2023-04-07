#include "main.h"

/**
 *clear_bit-> function sets value of bit at an index to '0'.
 *@n: pointer to binary value.
 *@index: position of bit to be set.
 *Return: 1 if successful and -1 incase of error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = (~(1UL << index) & *n);
		return (1);
	}
}
