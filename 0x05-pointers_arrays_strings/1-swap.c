#include "holberton.h"
/**
 *swap_int - swaps the values of two integers.
 *@a: input 1
 *@b: input 2
 * Return: 0.
*/
void swap_int(int *a, int *b)
{
int vaso = *a;
*a = *b;
*b = vaso;
}
