#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_calloc-> function that allocates memory for an array using malloc.
 *@nmemb:number arrray elements
 *@size: size of each element
 *
 *Return: address to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *tmp, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	else
	{
		tmp = malloc(nmemb * size);
	}

	if (tmp == 0)

		return (NULL);
	for (i = 0; i < size * nmemb; i++)
	{
		*((char *)tmp + i) = 0;
	}

	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}

	return (tmp);
}
