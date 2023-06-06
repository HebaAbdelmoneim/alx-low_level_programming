#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: node data structure pointer
 * @index: index of the node
 *
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = head;
	for (i = 0; i < index; i++)
	{
		node = node->next;
	}
	if (!node)
		return (NULL);
	return (node);
}
