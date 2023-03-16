#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked-> function allocates memory using the "malloc" function.
 *@b:argument holding the number of elements to be accomodated.
 *
 *Return: address of the first space in memory.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *) malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
