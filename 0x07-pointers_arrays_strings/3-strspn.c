#include "main.h"

/**
 * _strspn-> function that gets the length of a prefix substring.
 * @s: main string
 * @accept: substring
 * Return: length of string @s in bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l, i = 0;


	while (s[i] != '\0')
	{
		int j = 0;
		int s = 1;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				l++;
				s = 0;
				break;
			}

			j++;
		}

		if (s)
			return (l);

		i++;
	}

	return (l);
}
