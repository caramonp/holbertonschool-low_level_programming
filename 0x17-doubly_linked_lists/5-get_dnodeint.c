#include "lists.h"

/**
 * get_dnodeint_at_index - returns data of nth node
 * @head: head
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	size_t node = 0;

	while (head != NULL)
	{
		if (node == index)
		{
			break;
		}
		head = head->next;
		node++;
	}

	return (head);
}
