#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - funtion to add a new node
 * @head: pointer to a head to the list
 * @n: pointer to a string value
 * Return: new
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *new;
new = malloc(sizeof(listint_t));

if (new == NULL)
{
	return (NULL);
	free(new);
}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
