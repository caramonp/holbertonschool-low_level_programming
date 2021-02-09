#include "holberton.h"
#include <ctype.h>

/**
 * _isalpha - observa si un caracter es del alfabeto
 *@c: entrada
 * Return: Always 0.
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
