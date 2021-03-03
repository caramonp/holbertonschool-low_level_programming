#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  function allocated space in memory
 * @str: input
 * Return: NULL or pointer
 **/

char *_strdup(char *str)
{
char *s;
int i, j;
if (str == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
i++;
s = malloc(sizeof(char) * (i + 1));
if (s == NULL)
{
return (NULL);
}
for (j = 0; str[j] != '\0'; j++)
s[j] = str[j];

return (s);
}
