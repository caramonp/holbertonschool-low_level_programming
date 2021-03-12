#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: numero de datos
 * Return: 0 is n == 0
**/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, suma = 0;
va_list(a); /** variable que apunta a la lista de argumentos**/
int j;
if (n == 0)
{
return (0);
}
va_start(a, n); /** inicializa a, ultimo argumento **/
for (i = 0; i < n; i++)
{
j = va_arg(a, int);
suma += j;
}
va_end(a);
return (suma);

}

