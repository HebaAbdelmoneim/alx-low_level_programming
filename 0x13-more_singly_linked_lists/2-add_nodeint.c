#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a list
 *
 * @head: node data structure pointer
 * @n: added numbers
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
