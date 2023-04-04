#include "lists.h"

/**
 *listint_len-> function returns number of elements in a linked list.
 *@h:head that holds the address to the first node.
 *Return: an unsighned integer (size_t).
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t i;

	i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
