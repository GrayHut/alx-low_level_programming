#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 * followed by a new line
 *@s :-character pointer variable
 *Return: returns zero
 */

void print_rev(char *s)
{
	int l, i;

	l = _strlen(s);

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
