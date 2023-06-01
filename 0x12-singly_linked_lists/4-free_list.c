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
	while (head)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}
