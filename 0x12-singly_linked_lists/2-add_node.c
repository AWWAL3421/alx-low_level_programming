#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new member, or NULL if it is wrong
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = strlen(str);
	list_t *new = malloc(sizeof(list_t));

	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);

	(*head) = new;

	return (*head);
}

