#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @d: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @d.
 */

char *_strcpy(char *d, char *src)
{
	for (int i = 0; src[i] != '\0'; i++)
	{
		d[i] = src[i];
	}

	d[i++] = '\0';

	return (d);
}
