#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments given to program
 * @argv: cantidad
 * @argc: numero
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int results;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	results = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", results);
	return (0);
}
