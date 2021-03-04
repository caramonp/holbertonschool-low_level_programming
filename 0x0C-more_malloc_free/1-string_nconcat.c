#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - allocates memory using malloc.
 * @s1: input
 * @s2: input
 * @n: input
 * Return: pointer.
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int recorrido1, recorrido2, i, j;
j = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (recorrido1 = 0; s1[recorrido1] != '\0'; recorrido1++)
{}
for (recorrido2 = 0; s2[recorrido2] != '\0'; recorrido2++)
{}
if (n >= recorrido2)
	n = recorrido2;
p = malloc(sizeof(*p) * (recorrido1 + n + 1));
if (p == NULL)
	return (NULL);
for (i = 0; i < recorrido1; i++)
{
p[i] = s1[i];
}
for (i = recorrido1; i < recorrido1 + n; i++)
{
p[i] = s2[j];
j++;
}
p [recorrido1 + n] = '\0';
return (p);
}
