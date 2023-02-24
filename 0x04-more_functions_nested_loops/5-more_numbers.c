#include "main.h"

/**
 *more_numbers(): prints 0-14 ten times
 *@i and @d are the variable texts
 *Returns zero always
 */

void more_numbers(void)
{
	int i,d;

	for (i = 1; i <= 10; i++)
	{
	for (d = 0; d < 15; d++)
	{
		if (d >= 10)
		{

			_putchar((d / 10) + '0');

		}

		_putchar(d % 10 + '0');
	}

	_putchar('\n');

	}
}
