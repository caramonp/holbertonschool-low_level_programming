#include "holberton.h"

/**
 *cap_string - function that capitalizes all words of a string.
 *@s: string
 * Return: s
*/
char *cap_string(char *s)
{
int i, j;
char exc[] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; exc[j] != '\0'; j++)
{
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] = s[0] - 32;
}
if (s[i] == exc[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}
}
return (s);
}
