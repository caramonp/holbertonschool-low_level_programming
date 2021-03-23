#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements in a linked
 * @h: pointer to a list
 * Return: count the elements
 **/
size_t listint_len(const listint_t *h)
{
int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
