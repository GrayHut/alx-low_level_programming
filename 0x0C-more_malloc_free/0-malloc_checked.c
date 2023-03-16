#include <stdio.h>
#include <stlib.h>

/**
 *malloc_checked-> function allocates memory using the "malloc" function.
 *@b:argument holding the number of elements to be accomodated.
 *
 *Return: address of the first space in memory.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		return (98);
}
