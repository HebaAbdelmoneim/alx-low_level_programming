#include "lists.h"

/**
 * print_list - prints all the elements
 *
 * @h: node data structure
 *
 * Return: Size_t of the nodes
 */

size_t print_list(const list_t *h)
{
	size_t s;

	for (s = 0; h != NULL; s++)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (s);
}
