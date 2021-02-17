#include "holberton.h"
/**
 *puts_half -  prints half of a string
 * @str : input
 *
 */
void puts_half(char *str)
{
int c;

		for (c = 0; str[c] != '\0'; c++)
		{}

		if (c % 2 == 0)
			for (c /= 2; str[c] != '\0' ; c++)
			{
				_putchar(str[c]);
			}
		else
			for ((c = (c - 1) / 2); str[c] != '\0'; c++)
			{
				_putchar (str[c]);
			}
		_putchar ('\n');
}
