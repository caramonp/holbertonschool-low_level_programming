#include "holberton.h"
/**
 * print_alphabet_x10 - imprimi 10 veces el alfabeto
 * print_alphabet - imprime el alfabeto
 * Description: prints 10 times the alphabe
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');

}
/**
 * print 10 times
 **/
void print_alphabet_x10(void)
{
int x;
for (x = 0; x < 10; x++)
{
print_alphabet();

}
}
