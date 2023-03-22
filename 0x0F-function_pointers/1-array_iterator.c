#include "function_pointers.h"
/**
 *array_iterator-> function that takes array, size and function pointer
 *parameters.
 *@array:array of elements to be converted.
 *@size:number of elements in the array.
 *@action:pointer to functions.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
