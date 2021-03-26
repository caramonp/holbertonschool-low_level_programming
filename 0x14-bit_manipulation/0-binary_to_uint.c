#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - Funtion that converrts binary to decimal..
 *@b: Binary numbers.
 * Return: Decimal numbers.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i, k = 0;
int j, l = 0;
if (!b)
{
	return (0);
}

for (i = 0; b[i] != '\0'; i++)
{}
for (j = i - 1; j >= 0; j--)
{
	if (b[j] != '0' && b[j] != '1')
	{
		return (0);
	}
	if (b[j] == '1')
	{
		k += (1 << l);
	}
	l++;
}
return (k);
}
