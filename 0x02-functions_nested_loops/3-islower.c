#include "holberton.h"

/**
 * _islower - check if c is lower
 *@c: entrada
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
