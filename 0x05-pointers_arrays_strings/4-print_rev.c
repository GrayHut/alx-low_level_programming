#include "main.h"

/**
 *print_rev - prints string in reverse.
 *@s: string to be printed
 *Return nothing
 */


void print_rev(char *s)
{

	int l = 0;

	while (s[l] != '\0')
		l++;

	while (l)
		_putchar(s[--l]);

	_putchar('\n');
}
