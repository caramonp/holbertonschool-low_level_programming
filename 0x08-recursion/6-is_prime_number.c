#include "holberton.h"
/**
 *define_prime -  definir formula de numeros primos
 *@i: input
 *@j: input
 *Return: funtion
 **/
int define_prime(int i, int j)
{
if (j == 1)
{
	return (1);
}
if (i % j == 0)
{
	return (0);
}
else
	return (define_prime(i, j - 1));

}
/**
 *is_prime_number -  definir formula de numeros primos
 *@n: input
 *Return: funtion
 **/
int is_prime_number(int n)
{
if (n <= 1)
{
	return (0);
}
else
return (define_prime(n, n - 1));
}
