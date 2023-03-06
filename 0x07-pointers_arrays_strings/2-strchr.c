#include <stdlib.h>
#include "main.h"

/**
 * _strchr-> function to be implemented
 * @s: string to be analysed
 * @c: character to be found
 * Return: string character equal to c or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i++] != '\0')
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
