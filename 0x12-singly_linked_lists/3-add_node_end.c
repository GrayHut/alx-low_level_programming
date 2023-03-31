#include "lists.h"
/**
 *add_node_end->function that add new node to end of linked list.
 *@head: pointer to the address of first node.
 *@str: pointer to string member of the struct.
 *Return: address of new element of NULL upon failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *presentNode;
	size_t i;

	newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	(*newNode).str = strdup(str);

	i = 0;

	while (str[i])
	{
		i++;
	}
	(*newNode).len = i;
	(*newNode).next = NULL;
	presentNode = *head;

	if (presentNode == NULL)
	{
		*head = newNode;
	}
	else
	{
		while ((*presentNode).next != NULL)
		{
			presentNode = (*presentNode).next;
		}
		(*presentNode).next = newNode;
	}
	return (*head);
}
