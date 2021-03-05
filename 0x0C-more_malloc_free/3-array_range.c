#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - allocates memory using malloc.
 * @min: input
 * @max: input
 * Return: pointer.
**/
int *array_range(int min, int max)
{
int *p;
unsigned int i, j;
i = max - min;
if ( min > max)
{
  return (NULL);
}
p = (malloc(sizeof(int) * (i + 1)));
if (p == NULL)
{
  return (NULL);
}
j = 0;
while (j < i)
{
j++,
min++;
}
p[j] = min;
return (p);
}
