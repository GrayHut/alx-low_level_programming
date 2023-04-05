#include "lists.h"

/**
 * get_nodeint_at_index -function returns the nth node at a certain index in a
 * linked list.
 * @head: first node in linked list.
 * @index: index of the node to return.
 *
 * Return: pointer to the node, or NULL if unsuccessful.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *current = head;
	size_t i = 0;

	while (current && i < index)
	{
		current = (*current).next;
		i++;
	}

	return (current ? current : NULL);
}
