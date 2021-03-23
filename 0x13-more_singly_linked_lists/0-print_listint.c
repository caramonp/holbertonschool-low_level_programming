#include "lists.h"
#include <stdio.h>

/**
 * print_listint - funtion to print all elements to de list
 * @h: pointer to a list
 * Return: number of the nodos
 **/

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
