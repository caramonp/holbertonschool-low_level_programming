#include "holberton.h"

/**
 * _isupper - check if c is issuperr
 *@c: entrada
 * Return: 1 or 0.
 */

int _isupper(int c)
{
  if (c >= 'A' && c <= 'Z')
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
