#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_list->function prints all the elements of a list.
 *@h:pointer to list_t.
 *Return: unsigned integer (number of nodes).
 *
 */

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;
		i++;
	}
	return (i);
}
