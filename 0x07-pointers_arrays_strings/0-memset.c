#include "main.h"

/**
 * _memset-> function fills the first n bytes of the memory area
 *  pointed to by s with the constant byte b.
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 * Return: pointer to character @s
 */

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

		i = 0;
		while (i <= n)
		{
			s[i] = b;
			i++;	
		}
			return (s);	
}
