#include "lists.h"
#include <stdio.h>

/**
 * print_list - funtion to print all elements to de list
 * @h: pointer to a list
 * Return: count the elements
 **/

size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 1; h->next != NULL;  i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (i);
}
