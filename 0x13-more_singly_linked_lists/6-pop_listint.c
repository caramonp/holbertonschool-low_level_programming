#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -ction that deletes the head node of a listint_t
 * @head: pointer to a head to the list
 * Return: principal node
 **/
int pop_listint(listint_t **head)
{
	int position;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	position = (*head)->n;
	free(*head);
	*head = (*head)->next;
	return (position);
}
