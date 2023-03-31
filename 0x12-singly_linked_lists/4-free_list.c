#include "lists.h"
/**
 *free_list-> function frees a linked list.
 *@head:pointer to the address of first node.
 *Return:nothing
 */

void free_list(list_t *head)
{
	list_t *newNode;

	newNode = (list_t *)malloc(sizeof(list_t));

	while (head != NULL)
	{
		newNode = head;
		head = (*head).next;
		free(newNode);
	}
}
