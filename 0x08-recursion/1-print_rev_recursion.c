#include "holberton.h"
/**
 *_print_rev_recursion - Recursion that prints a string, followed by a new line.
 *@s: input
 *Return: funtion
 **/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar (*s); 
}

}
