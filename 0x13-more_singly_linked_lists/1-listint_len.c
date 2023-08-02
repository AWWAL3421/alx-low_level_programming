#include "lists.h"

/**
 * listint_len - returns the number of values in a linked lists
 * @h: pointer to the listint_t list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t val = 0;

	while (h)
	{
		val++;
		h = h->next;
	}

	return (val);
}


