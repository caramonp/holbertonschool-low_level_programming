#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - funtion to free the list
 * @head: pointer to a head to the list
 * Return: noting
 **/
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next)
	{
		free_list(head->next);
	}
	free(head->str);
	free(head);
}
