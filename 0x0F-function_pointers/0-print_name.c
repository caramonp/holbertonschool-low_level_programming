#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - funtions that prints names
 * @name: nombre
 * @f: pointer
 * Return : nothing
**/

void print_name(char *name, void (*f)(char *))
{
if (name == '\0' || f == '\0')
{
return;
}
f(name);
}
