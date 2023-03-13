#include "main.h"

/**
 *_strncat - takes in two string arguments and concatinates them
 *the conacatinated string ends with a null byte
 *@dest: destination of final string
 *@src: are the strings to be concatinated
 *@n: number of bits to be included
 *Return: pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
