#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_listint2 - funtion to free the list
 * @head: pointer to a head to the list
 * Return: noting
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
	*head = (*head)->next;;
	
	return (position);
}
