#include "holberton.h"

/**
 *_strcmp -  compares two strings.
 *@s1 : input
 *@s2 : input
 *Return: dest
 *
*/
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] == s2[i])
return (0);
else
return (s1[i] - s2[i]);
i++;
}
return (s1[i] - s2[i]);
}
