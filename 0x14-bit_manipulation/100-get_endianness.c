#include "main.h"

/**
 *get_endianness-> function checks the endianness.
 *Return: zero if big endian and 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;

	char *x = (char *)&i;

	return (*x);
}
