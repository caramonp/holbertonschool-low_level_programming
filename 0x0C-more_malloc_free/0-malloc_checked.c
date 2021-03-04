#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: input
 * Return: pointer.
**/

void *malloc_checked(unsigned int b)
{
unsigned int *p;
p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
return (p);
}
