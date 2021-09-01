#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array
 * @array: arrays with integers
 * @size: number of elements
 * @value: value of the integer
 * Return: integer or -1
**/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = (size - 1), i = 0;
	int center = 0;

	if (!array || !size)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[right]);

		center = (right + left) / 2;

		if (array[center] == value)
			return (center);

		else if (array[center] > value)
			right = center - 1;

		else
			left = center + 1;
	}
	return (-1);
}
