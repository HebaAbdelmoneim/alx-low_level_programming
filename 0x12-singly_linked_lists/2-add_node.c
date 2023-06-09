#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list
 *
 * @head: node data structure pointer
 * @str: pointer to string
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}
