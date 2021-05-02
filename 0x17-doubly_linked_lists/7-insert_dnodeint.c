#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: head
 * @idx: index
 * @n: content
 * Return: list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int node = 1;
	dlistint_t *tmp = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL || h == NULL)
		return (NULL);

	new->n = n;
	tmp = *h;
	if (idx == 0)
	{
		*h = new;
		new->next = tmp;
		new->prev = NULL;
		tmp->prev = new;
		return (new);
	}

	while (tmp->next != NULL)
	{
		if (node == idx)
		{
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
			new->next->prev = new;
		}
		tmp = tmp->next;
		node++;
	}

	if (node < idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
