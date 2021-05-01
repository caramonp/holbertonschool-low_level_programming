#include "lists.h"
/**
 * add_dnodeint_end - add a node in the end of the list.
 * @head: head
 * @n: content
 * Return: content of new nodes
 *
**/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
		free(new);
	}
	new->n = n;
	new->next = NULL;
	if (*head != NULL)
	{
		last = *head;
			while (last->next != NULL)
				last = last->next;
				last->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
