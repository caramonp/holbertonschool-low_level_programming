#include "holberton.h"

/**
 *leet - function that encodes a string into 1337.
 *@s: string
 * Return: s
*/
char *leet(char *s)
{
int i, j;
char *c;
c = "aAeEoOtTlL4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j <= 9; j++)
{
if (s[i] == c[j])
s[i] = c[j + 10];
}
}
return (s);
}
