#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_listint2 - funtion to free the list
 * @head: pointer to a head to the list
 * Return: noting
 **/
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}
	if ((*head)->next)
	{
		free_listint2(&(*head)->next);
	}
	free(*(head));
	*head = NULL;
}
