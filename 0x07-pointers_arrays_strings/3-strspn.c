#include "holberton.h"

/**
 *_strspn - copies memory area
 * @s: input
 * @accept: input
 *Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, k;
	k = 0;
	for (i = 0; s[i] != '\0' && s[i] != 32; i++)
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}
		}
	}
	return (k);
}
