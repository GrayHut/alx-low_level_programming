#include <stdio.h>
#include "main.h"

/**
 *
 *
 */

void more_numbers(void)
{
	int i,d;
	for (i = 1; i <= 10; i++)
	{
	for (d = 0; d < 15; d++)
	{
		_putchar(d);
		_putchar('\n');
	}
	}

	return 0;
}
