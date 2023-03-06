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
	unsigned int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		else if (s[i] != c)
		{
			return (NULL);
		}
	}
}
