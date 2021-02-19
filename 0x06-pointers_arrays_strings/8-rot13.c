#include "holberton.h"

/**
 *rot13 - function that encodes a string using rot13.
 *@s: string
 * Return: s
*/
char *rot13(char *s)
{
char c[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'A' && s[i] <= 'z' )
{
s[i] = c[i];
}
}
return (s);
}
