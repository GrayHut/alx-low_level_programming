#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated with a call to malloc.
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size: new size, in bytes of the new memory block.
 *
 * Return: pointer to modified memory space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int j;
	void *tmp;

	if (new_size == old_size)
		return (ptr);

	if (tmp == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size > old_size)
	{
		tmp = malloc(new_size);

		for (j = 0; j < old_size; j++)
			*((char *)tmp + j) = *((char *)ptr + j);

		free(ptr);
		return (tmp);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
	{
		ptr1 = malloc(new_size);

		for (j = 0; j < new_size; j++)
			*((char *)tmp + j) = *((char *)ptr + j);

		free(ptr);
		return (tmp);
	}
	return (NULL);
}
