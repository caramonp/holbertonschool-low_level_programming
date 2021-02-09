#include "holberton.h"

/**
 * print_last_digit - imprime el numero final
 * @n: entrada
 * Description:  function that prints the last digit of a number.
 * Returns the value of the last digit
 */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
n = -n;
_putchar(n + '0');
return (n);
}
