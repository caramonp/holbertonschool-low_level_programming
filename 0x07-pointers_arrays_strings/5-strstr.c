#include "holberton.h"

/**
 *_strstr - searches a string for any of a set of bytes.
 * @haystack: input
 * @needle: input
 *Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0 ; needle[j] != '\0'; j++)
		{
			if (haystack[i] != needle[j])
			{
				return (needle);
			}
		}
	}
return ('\0');
}
