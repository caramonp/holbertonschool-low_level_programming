#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: input
 * @c:input
 * Return: NULL or pointer
 **/

char *create_array(unsigned int size, char c)

{
char *p;
unsigned int i;
if (size == 0)
return (NULL);
p = (char *) malloc(size * sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; i < size; i++)
p[i] = c;
	return (p);
}
