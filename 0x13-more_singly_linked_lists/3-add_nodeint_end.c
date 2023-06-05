#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head: node data structure pointer
 * @n: numbers to be added
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *end_node;

	end_node = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (end_node != NULL)
	{
		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
