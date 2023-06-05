#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: node data structure pointer
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *node = head;

	while (node)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
}
