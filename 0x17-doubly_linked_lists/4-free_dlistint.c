#include "lists.h"
/**
 * free_dlistint - funtion to free the list
 * @head: pointer to a head to the list
 * Return: noting
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next)
	{
		free_dlistint(head->next);
	}
	free(head);
}
