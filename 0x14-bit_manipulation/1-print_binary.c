#include "main.h"

/**
 *print_binary-> function converts decimal to binary equivalent.
 *@n: argument holding integer/ decimal input.
 *Return: void.
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int present;

	present = 0;
	i = 63;

	while (i >= 0)
	{
		present = n >> i;

		if (present & 1)
		{
			_putchar('1');
			present++;
		}
		else if (present)
		{
			_putchar('0');
		}
		i--;
	}
	if (!present)
		_putchar('0');
}
