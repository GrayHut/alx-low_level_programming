#include "lists.h"

/**
 *print_listint-> function prints the number of nodes present in a linked list.
 *@h:head that holds the address to the first node.
 *Return: an unsighned integer (size_t).
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t i;

	i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
