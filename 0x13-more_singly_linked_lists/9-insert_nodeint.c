#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: node data structure pointer
 * @idx: index of the list where the new node should be added
 * @n: integer value
 *
 * Return: node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	node = *head;
	if (!idx)
	{
		return (NULL);
	}
	for (i = 0; i < idx - 1; i++)
	{
		node = node->next;
		if (!node)
			return (NULL);
	}
	new_node->next = node->next;
	new_node->n = n;
	node->next = new_node;
	return (new_node);
}
