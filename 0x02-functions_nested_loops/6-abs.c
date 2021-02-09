#include "holberton.h"
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _abs(int j)
{
if (j == 0)
{
return (j);
}
if (j < 0)
{
j = j * -1;
return (j);
}
else
{
return (j);
}
}
