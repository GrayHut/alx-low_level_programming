#include "main.h"

/**
 * puts2 - prints everyother element in a string.
 * @str: - string to be printed.
 * returns nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
