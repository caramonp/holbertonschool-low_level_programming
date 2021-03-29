#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* read_textfile -  function that reads a text file and prints it
* @filename: name of the file
* @letters: he number of letters it should read and print
*Return: the actual number of letters it could read and print
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
int abrir, leer, imprimir;
char *buffer;

buffer = malloc(sizeof(*buffer) * letters);
if (buffer == NULL)
{
	return (0);
}

abrir = open(filename, O_RDONLY);
if (abrir == -1)
{
	return (0);
}
leer = read(abrir, buffer, letters);
if (leer == -1)
{
	return (0);
}
imprimir = write(STDOUT_FILENO, buffer, leer);
if (imprimir == -1)
{
	return (0);
}
free(buffer);
close(abrir);
return (imprimir);
}
