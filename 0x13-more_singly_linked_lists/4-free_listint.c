#include "lists.h"

/**
 *free_listint-> function frees the linked list.
 *@head: linked list to freed.
 *Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = (*head).next;
		free(head);
		head = current;
	}
}
