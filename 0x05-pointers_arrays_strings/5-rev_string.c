#include "holberton.h"

/**
 *rev_string -  function that reverses a string
 *@s: input
*/
void rev_string(char *s)
{
char z[10];
int x, y;
for (x = 0; s[x] != 0; x++)
{
z[x] = s[x];
}
x--;
for (y = 0; x >= 0; x--)
{
s[y] = z[x];
y++;
}
}
