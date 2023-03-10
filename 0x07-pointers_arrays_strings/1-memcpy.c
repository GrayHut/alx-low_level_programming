#include "main.h"

/**
 * _memcpy-> function that copies memory of @src to @dest.
 * @dest: parameter 1
 * @src: parameter 2
 * @n: variable for number of elements
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
