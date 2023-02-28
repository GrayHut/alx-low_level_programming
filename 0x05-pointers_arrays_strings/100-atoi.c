#include "main.h"

/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */


int _atoi(char *s)
{
	int x, i = 0;
	int m = 1;
	unsigned int n = 0;

		while (s[x])
		{
			if (s[x] == 45)
			{
				m *= -1;
			}

			while (s[x] >= 48 && s[x] <= 57)
			{
				i = 1;
				n = (n * 10) + (s[x] - '0');
				x++;
			}
			if (i == 1)
			{
				break;
			}

			x++;
		}
	n *= m;
	return (n);
}
