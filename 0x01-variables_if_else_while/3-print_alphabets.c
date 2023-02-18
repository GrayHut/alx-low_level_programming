#include <stdio.h>

/**
 * main - Print lowercase followed by uppercase.
 *
 * Return: always zero
 */

int main(void)
{
	char c, t;

	c = 'a';
	t = 'A';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (t = 'A'; t <= 'Z'; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
