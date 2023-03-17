#include <stdio.h>
#include <stdlib.h>
/**
 *array_range->  creates an array of integers.
 *@min:minimum range of stored elements
 *@max:maximum range of stored values
 *
 *Return: pointer to new array.
 */

int *array_range(int min, int max)
{
	int *tmp;
	int i, size;

	if (min > max)

		return (NULL);
	size = max - min + 1;

	tmp = malloc(sizeof(int) * size);

	if (tmp == NULL)

		return (NULL);

	for (i = 0; min <= max; i++)

		tmp[i] = min++;
	return (tmp);

}
