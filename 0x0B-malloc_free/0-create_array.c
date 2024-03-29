#include <stdio.h>
#include <stdlib.h>
/**
 *create_array-> function creates an array of characters and initializes
 *them with a specific char.
 *@size: integer argument that holds the number of the array elements.
 *@c: variable to the character to be initalized.
 *
 *Return: char.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	if (arr == 0 || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
