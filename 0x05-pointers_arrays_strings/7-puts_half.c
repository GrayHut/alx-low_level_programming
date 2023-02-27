#include "main.h"

/**
 * puts_half - print half of a string
 * if string has odd number of elements,
 *last n elements are printed.
 *@str: string to be printed.
 * return nothing
 */

void puts_half(char *str)
{
	int l = 0;
	int i, t;

	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
		t = l / 2;

	else
		t = (l + 1) / 2;

	for (i = t; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
