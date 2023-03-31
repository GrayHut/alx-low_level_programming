#include "lists.h"
/**
 *add_node->functions adds a new node at the beginning of a list.
 *@head:pointer to first node.
 *@str:string to be duplicated.
 *Return: address of new element or NULL incase of failure.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int i;

	newNode = (list_t *)malloc(sizeof(list_t));
	(*newNode).str = strdup(str);

	i = 0;

	while (str[i])
	{
		i++;
	}
	(*newNode).len = i;
	(*newNode).next = *head;
	*head = newNode;

	if (newNode == NULL)
		return (NULL);
	else
		return (*head);
}
