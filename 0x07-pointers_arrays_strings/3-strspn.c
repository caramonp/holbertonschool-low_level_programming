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

	for (i = 0; s[i] != '\0' && s[i] != 32; i++)
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			k = 1;
		}
		if (k == 0)
		{
			return (i);
		}
	}
return (j);
}
