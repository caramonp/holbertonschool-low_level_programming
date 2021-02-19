#include "holberton.h"

/**
 *reverse_array -  reverses the content of an array
 *@a : input
 *@n : input
 *
*/
void reverse_array(int *a, int n)
{
int i, aux;
for (i = 0; i < n; i++)
{
aux = a[n - 1];
a[n - 1] = a[i];
a[i] = aux;
n--;
}
}
