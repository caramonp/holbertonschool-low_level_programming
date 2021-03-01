#include <stdio.h>

/**
 *main - prints the number of arguments
 *@argc: count
 *@argv: pointer
 *Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv = argv;

	return (0);
}
