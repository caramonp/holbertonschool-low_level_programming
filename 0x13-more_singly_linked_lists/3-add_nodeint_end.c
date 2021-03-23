#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint_end - funtion to add a new node in the final
 * @head: pointer to a head to the list
 * @n: pointer to a string value
 * Return: new
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
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
