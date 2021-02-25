#include "holberton.h"
/**
 *_strlen_recursion - Recursion that prints a string
 *@s: input
 *Return: funtion
 **/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
return (1 + _strlen_recursion(s + 1));
}

/**
 *reverse -  revertir un string
 *@s: input
 *@c: input
 *@e: input
 *Return: funtion
 **/
int reverse(char *s, int c, int e)
{
	if (s[c] == s[e])
	{
		return (1);
	}
	if (s[c] != s[e])
	{
		return (0);
	}
	if (s[c] < s[e + 1])
	return (reverse(s, c + 1, e - 1));
	return (1);
}
/**
 *is_palindrome -  encontrar palindromo
 *@s: input
 *Return: funtion
 **/
int is_palindrome(char *s)
{
	int n;

	n = _strlen_recursion(s);

	if (n == 0)
	{
		return (1);
	}
return (reverse(s, 0, n - 1));
}
