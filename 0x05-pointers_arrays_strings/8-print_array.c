#include "holberton.h"
#include <stdio.h>
/**
 *print_array -  prints n elements of an array of integers
 * @a : input
 *@n : input
  Description: prints n digits of array
 */

void print_array(int *a, int n)
{
  int c;

  for (c = 0; c < n; c++)
  {
      printf("%d", a[c]);
        if (c != n - 1)
        {
          printf(", ");
        }
  }
  printf("\n");
}
