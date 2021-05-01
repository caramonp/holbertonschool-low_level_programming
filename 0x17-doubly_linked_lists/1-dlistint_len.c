#include "lists.h"
/**
 * dlistint_len -  len of the list
 * @h: head
 * Return: number of nodes
 *
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
