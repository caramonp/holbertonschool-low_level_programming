#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints strings, followed by a new line.
 * @format: numero de datos
 * Return: 0 is n == 0
**/
void print_all(const char * const format, ...)
{
va_list(a);
unsigned int i, j;
i = 0;
char *ptr;

while (format)
{
va_start(a, format);
while  (*(format + i))
{
j = 1;
switch (*(format + i))
{
case 'c':
printf("%c", va_arg(a, int));
break;

case 'i':
printf("%d", va_arg(a, int));
break;

case 'f':
printf("%f", va_arg(a, double));
break;

case 's':
ptr = va_arg(a, char *);
if (ptr == '\0')
ptr = "(nil)";
printf("%s", ptr);
break;

default:
j = 1;		
break;
}
if (*(format + i + 1) && j)
printf(", ");
i++;
}
va_end(a);
break;
}
printf("\n");
}
