#include "lists.h"

/**
 *add_nodeint_end-> adds new node at the end of linked list.
 *@head:pointer to first node.
 *@n: member containing node data.
 *Return: new address of new element on success and NULL on failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = newNode;
	}
	return (newNode);

}
