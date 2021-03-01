#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * isnumber - determines if input is a number or not
 * @n: number to check
 * Return: 0
 */
int isnumber(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (isdigit(n[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
