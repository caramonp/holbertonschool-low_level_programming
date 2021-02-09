#include "holberton.h"

/**
 * main - the code prints the last digit of a number.
 *
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