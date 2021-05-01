#include "lists.h"
/**
 * add_dnodeint -  add a node in the list.
 * @head: head
 * @n: content
 * Return: content of new nodes
 *
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->prev = NULL;
		tmp = *head;
		*head = new;
		new->next = tmp;

		if (tmp != NULL)
			tmp->prev = *head;

	return (new);
}
