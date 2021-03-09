#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *new_dog - Function that creates a new dog.
 * @name: name´s dog
 * @age: age´s dog
 * @owner: owner´s dog
 *Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *the_dog;
int i, j, k, f;
if (name == NULL || owner == NULL)
	return (NULL);
	the_dog = malloc(sizeof(dog_t));
if (the_dog == NULL)
	return (NULL);
for (i = 0; name[i] != '\0'; i++)
{
}
for (j = 0; owner[j] != '\0'; j++)
{
}
the_dog->name = malloc(sizeof(char) * i + 1);
if (the_dog->name == NULL)
{
	free(the_dog);
	return (NULL);
}
for (k = 0; k < (i + 1); k++)
the_dog->name[k] = name[k];
the_dog->age = age;
the_dog->owner = malloc(sizeof(char) * (j + 1));
if (the_dog->owner == NULL)
{
	free(the_dog->name);
	free(the_dog);
	return (NULL);
}
for (f = 0; f < (j + 1); f++)
the_dog->owner[f] = owner[f];
return (the_dog);
}
