#include "lists.h"
#include <stdio.h>

/**
 * list_len - funtion to print the size to de list
 * @h: pointer to a list
 * Return: count the elements
 **/
size_t list_len(const list_t *h)
{
int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 1; h->next != NULL;  i++)
	{
		if (h->str != NULL)
		{
			h = h->next;
		}
	}
	return (i);
}
