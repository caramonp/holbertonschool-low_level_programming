#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -ction that deletes the head node of a listint_t
 * @head: pointer to a head to the list
 * @index: index of the node
 * Return: null if the node dont exist
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
