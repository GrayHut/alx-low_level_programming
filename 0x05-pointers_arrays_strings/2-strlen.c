#include "main.h"

/**
 * _strlen - returns size of a string.
 * @s: pointer to character integer;
 * Return: size of string.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
