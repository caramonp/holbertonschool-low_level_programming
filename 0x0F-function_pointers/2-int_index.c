#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - function that searches for an integer.
 * @array: matriz
 * @size: tamaño
 * @cmp: accion
 * Return : 0
**/
int int_index(int *array, int size, int (*cmp)(int))
{
int i, j;
j = size;
if (array != NULL || cmp != NULL)
{
if (size <= 0)
{
return (-1);
}
for (i = 0; i < j; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
cmp(array[i]);
}
return (-1);
}
