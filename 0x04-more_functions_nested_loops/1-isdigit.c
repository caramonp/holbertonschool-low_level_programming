#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: entrada
 *
 * Return: 1 y 0
**/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
