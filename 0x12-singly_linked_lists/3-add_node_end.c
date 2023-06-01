#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 *
 * @head: node data structure pointer
 * @str: pointer to string
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
        list_t *temp;
	list_t *end_node;

	end_node = *head;
        temp = malloc(sizeof(list_t));
        if (temp == NULL)
                return (NULL);
        temp->str = strdup(str);
        temp->len = strlen(str);
        temp->next = *head;
        *head = temp;
        return (end_node);
}
