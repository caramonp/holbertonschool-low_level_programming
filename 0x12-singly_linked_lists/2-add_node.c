#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - funtion to add a new node
 * @head: pointer to a head to the list
 * @str: pointer to a string value
 * Return: new
 **/
list_t *add_node(list_t **head, const char *str)
{
int i;

list_t *new;
new = malloc(sizeof(list_t));

if (new == NULL)
{
	return (NULL);
	free(new);
}
for (i = 1; str[i] != '\0'; i++)
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
