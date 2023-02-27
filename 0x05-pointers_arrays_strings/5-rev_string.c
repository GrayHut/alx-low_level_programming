#include "main.h"

/**
 * rev_string - reveses string.
 * @s: string to be printed.
 * Return nothing
 */

void rev_string(char *s)
{
	int l, i, temp;

	l = 0;
	i = 0;

	while (s[i++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}

}
