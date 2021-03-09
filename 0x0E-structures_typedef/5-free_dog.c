#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_dog- Function that free a dog.
 * @d: pointer
 *Return: 0
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
else
free(d->name);
free(d->owner);
free(d);
}
