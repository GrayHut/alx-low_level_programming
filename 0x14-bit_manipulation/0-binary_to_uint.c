#include "main.h"

/**
 *binary_into_uint-> this function converts binary to decimal integer(unsigned)
 *@b:pointer to string of 0s and 1s.
 *Return: the converted number if successful and 0 if otherwise.
 */

unsigned int binary_into_uint(const char *b)
{

	int i;
	unsigned int decimal;

	i = 0;
	decimal = 0;

	if (b == NULL)
	{
		return (0);
	}

	if (b[i] < '0' || b[i] > '1')
	{
		return (0);
	}

	while (b[i])
	{
		decimal = ((2 * decimal) + (b[i] - '0'));
		i++;
	}
	return (decimal);
}
