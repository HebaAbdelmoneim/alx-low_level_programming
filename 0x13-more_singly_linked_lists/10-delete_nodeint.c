#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at indexof linked list
 *
 * @head: node data structure pointer
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int i;

	if (!head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	for (i = 0; i < index - 1; i++)
	{
		temp = node;
		node = node->next;
		if (!node)
			return (-1);
	}
	temp->next = node->next;
	free(node);
	return (1);
}
