#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: node data structure pointer
 *
 * Return: integer
 */

int pop_listint(listint_t **head)
{
	listint_t *temp, *node;
	int x;

	if (!head)
		return (0);
	node = *head;
	temp = node->next;
	x = node->n;
	free(node);
	*head = temp;
	return (x);
}
