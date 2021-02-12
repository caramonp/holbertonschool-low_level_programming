#include "holberton.h"

/**
 *print_diagonal - raws a diagonal line on the terminal.
 * @n: entrada
 * Return: 0
 *
*/

void print_diagonal(int n)
{
int i, j;
for (j = 1 ; j <= n; j++)
{
for (i = 1; i <= j; i++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
if (n < 0)
{
_putchar('\n');
}
}
