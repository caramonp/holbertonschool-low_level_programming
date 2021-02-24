#include "holberton.h"
/**
 *_puts_recursion - Recursion that prints a string, followed by a new line.
 *@s: input
 *Return: funtion
 **/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar ('\n');
	return;
}
else
_putchar (*s);
s++;
_puts_recursion(s);
}
