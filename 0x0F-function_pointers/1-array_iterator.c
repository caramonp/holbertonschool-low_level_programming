#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - function given as a parameter on each element of an array.
 * @array: matriz
 * @size: tamaño
 * @action: accion
 * Return : nothing
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, j;

	j = size;

	if (array == NULL || action == NULL)
	{
		return;
	}
for (i = 0; i < j; i++)
action(array[i]);
}
