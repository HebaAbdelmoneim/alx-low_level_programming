#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: node data structure pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node = head, *temp;

	while (node)
	{
		temp = node->next;
		free(node->str);
		free(node);
		node = temp;
	}
}
