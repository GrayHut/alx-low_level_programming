#include <stdio.h>
#include "main.h"

/**
 * print_numbers - checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */


void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 2 || c == 4)
		{
			_putchar();
		}
		_putchar(c);
	}
		_putchar('\n');
}
