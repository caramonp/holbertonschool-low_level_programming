#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @n: numero de datos
 * @separator: he string to be printed between numbers
 * Return: 0 is n == 0
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;

	va_list(a);
	va_start(a, n);
for (i = 0; i < n; i++)
{
p = va_arg(a, char*);

if (p == '\0')
printf("(nil)");

else if (i < n - 1 && separator != '\0')
printf("%s%s", p, separator);

else
printf("%s", p);
}

printf("\n");
va_end(a);
}
