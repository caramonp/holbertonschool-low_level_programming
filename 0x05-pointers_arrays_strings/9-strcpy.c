#include "holberton.h"

/**
 *_strcpy -  copies the string pointed to by src
 * @dest : input
 *@src : input
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; i >= 0 && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
if (src[i] == '\0')
{
return (dest);
i++;
}
return (dest);
}
