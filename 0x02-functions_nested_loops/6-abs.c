#include "holberton.h"
/**
* _abs - valor absoluto
* @j: entrada
* Description: function that computes the absolute value of an integer.
* Return: Always 0.
*/
int _abs(int j)
{
if (j == 0)
{
return (j);
}
else if (j < 0)
{
j = j * -1;
return (j);
}
else
{
return (j);
}
}
