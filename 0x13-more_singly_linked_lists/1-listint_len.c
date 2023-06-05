#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 *
 * @h: node data structure
 *
 * Return: Size_t of the nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t s;

	for (s = 0; h != NULL; s++)
	{
		h = h->next;
	}
	return (s);
}
