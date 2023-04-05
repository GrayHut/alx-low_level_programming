#include "lists.h"

/**
 *pop_listint-> this function deletes the head node of a linked list.
 *@head: pointer to list's first node.
 *Return: deleted node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int i;

	if (!head || !*head)
	{
		return (0);
	}

	i = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (i);
}
