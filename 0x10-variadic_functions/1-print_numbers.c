#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: numero de datos
 * @separator: he string to be printed between numbers
 * Return: 0 is n == 0
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;

	va_list(a);
	va_start(a, n);
for (i = 0; i < n; i++)
{
j = va_arg(a, int);
printf("%d", j);
if (separator != '\0' && i <  n - 1)
{
	printf("%s", separator);
}
}
printf("\n");
va_end(a);
}
