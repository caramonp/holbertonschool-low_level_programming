#include "holberton.h"
#include <limits.h>
/**
 * main - Program that copies the content of a file to another file.
 * @argc: Argc.
 * @argv: Argv
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char buffer[BSIZE];
	int primero, segundo, firts, second;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(97);
	}
	primero = open(argv[1], O_RDONLY);
	if (primero == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
		}
segundo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
if (segundo == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
}
do {
	firts = read(primero, buffer, INT_MAX);
	second = write(segundo, buffer, firts);
} while (firts == BSIZE);
if (firts == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
if (second <= -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
}
	if (close(firts) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", firts), exit(100);
	if (close(second) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", second), exit(100);
return (0);
}
