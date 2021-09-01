#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * @array: arrays with integers
 * @size: number of elements
 * @value: value of the integer
 * Return: integer or -1
**/


int linear_search(int *array, size_t size, int value)
{

	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i <= size - 1; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}