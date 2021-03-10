#include "function_pointers.h"
/**
 * print_name - funtions that prints names
 * @name: nombre
 * @f: pointer
 * Return  nothing
**/

void print_name(char *name, void (*f)(char *))
{
if (name == '\0')
{
  return;
}
if (f == '\0')
{
  return;
}
f(name);
}
