#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - funtion to add a new node in the final
 * @head: pointer to a head to the list
 * @str: pointer to a string value
 * Return: new
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
		free(new);
	}
	for (i = 0; *(str + i) != '\0'; i++)
	{
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	}
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
