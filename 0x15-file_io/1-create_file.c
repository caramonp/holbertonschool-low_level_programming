#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* create_file -  function that creates a file
* @filename: name of the file
* @text_content: is a NULL terminated string to write to the file
*Return: 1 on success, -1 on failure
**/
int create_file(const char *filename, char *text_content)
{
	int abrir, imprimir, i;

	if (filename == NULL)
	{
		return (-1);
	}
	abrir = open(filename, O_RDONLY | O_CREAT | O_RDWR);

	if (abrir == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i] != '\0'; i++)
	{}
	imprimir = write(abrir, text_content, i);
	if (imprimir == -1)
	{
	close(abrir);
	return (1);
	}
	close(abrir);
	return (1);

}
