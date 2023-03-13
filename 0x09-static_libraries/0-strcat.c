#include "main.h"

/**
 *_strcat - takes in two string arguments and concatinates them
 *the conacatinated string ends with a null byte
 *@dest: destination of final string
 *@src: are the strings to be concatinated
 *
 *Return: pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
