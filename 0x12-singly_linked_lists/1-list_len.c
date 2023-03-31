#include "lists.h"

/**
 *list_len-> functions returns number of elements in a linked list.
 *@h:pointer to list list_h.
 *Return: number of elements in list (unsigned int).
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != 0; i++)
	{
		h = h->next;
	}
	return (i);
}
