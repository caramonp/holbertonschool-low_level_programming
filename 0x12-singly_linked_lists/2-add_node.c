#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * list_len - funtion to print the size to de list
 * @h: pointer to a list
 * Return: count the elements
 **/
list_t *add_node(list_t **head, const char *str)
{
  int i;
  list_t *new;
  new = malloc(sizeof(list_t));

  if (new == NULL)
    {
        return (NULL);
        free (new);
    }
  for (i = 0; str[i] != '\0'; i++)
  new->str = strdup(str);
  new->len = i;
  new->next = *head;
  *head = new;
  
  return (new);
}
