#include "holberton.h"

/**
 *print_line - draws a straight line in the terminal.
 *@n: entrada
 * Return: 0.
 */

void print_line(int n)
{
int m;

if (n >= 0)
{
for (m = 0; m < n; m++)
_putchar('_');
_putchar('\n');
}
else
{
_putchar('\n');
}
}
