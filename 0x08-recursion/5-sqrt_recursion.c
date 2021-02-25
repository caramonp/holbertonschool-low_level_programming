#include "holberton.h"
/**
 *sqrt_sec - Recursion that prints a string
 *@a: input
 *@b: input
 *Return: funtion
 **/
int sqrt_sec(int a, int b)
{
if (a == b * b)
{
	return (b);
}
else if (a < b * b)
	return (-1);
return (sqrt_sec(a, b + 1));
}
/**
 *_sqrt_recursion - Recursion that prints a string
 *@n: input
 *Return: funtion
 **/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
return (sqrt_sec(n, 0));
}
