#include "main.h"

/**
 * _memset-> function fills the first n bytes of the memory area
 *  pointed to by s with the constant byte b.
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		s[i] = b;
		i++;
	}
}
