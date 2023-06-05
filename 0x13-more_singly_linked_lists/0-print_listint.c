#include "lists.h"

/**
 * print_listint - prints all the elements
 *
 * @h: node data structure
 *
 * Return: Size_t of the nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t s;

	for (s = 0; h != NULL; s++)
	{
		if (h->n)
			printf("%i\n", h->n);
		h = h->next;
	}
	return (s);

}
