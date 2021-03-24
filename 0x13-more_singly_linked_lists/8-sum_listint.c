#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum the nt in the list
 * @head: pointer to a head to the list
 * Return: result of the sum
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
