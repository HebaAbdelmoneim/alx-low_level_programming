#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: node data structure pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	*head = NULL;
}
