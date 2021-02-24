#include "holberton.h"
#include "stdio.h"
/**
 *print_diagsums - prints the chessboard
 *@a: input
 *@size: int
 *Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, j, suma1, suma2;

	suma1 = 0;
	suma2 = 0;
	for (i = 0; i < size ; i++)
	{
		for (j = 0; j < size; j++)
		if (i == j)
		{
			suma1 = suma1 + a[size - i];
			printf("%d\n", suma1);
		}
		if (i + j == size - 1)
		{
			suma2 = suma2 + a[size - i];
			printf("%d \n", suma2);
		}
	}
}
