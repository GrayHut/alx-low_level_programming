#include "function_pointers.h"
/**
 *int_index-> function searches for an integer.
 *@array:pointer to array if integer elements.
 *@size: number of elements in the array.
 *@cmp: function pointer.
 * Return: int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
