#include "lists.h"
/**
 * delete_dnodeint_at_index - delete nodes
 * @head: head
 * @index: index
 * Return: list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int node = 0;
	dlistint_t *tmp = NULL;

if (head == NULL || *head == NULL)
	return (-1);

tmp = *head;
if (index == 0)
{
	*head = (*head)->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;
	}
	free(tmp);
	return (1);
}

while (tmp->next != NULL)
{
	if (node == index)
	{
		tmp->next->prev = tmp->prev;
		tmp->prev->next = tmp->next;
		free(tmp);
		return (1);
	}
tmp = tmp->next;
node++;
}
return (-1);
}
