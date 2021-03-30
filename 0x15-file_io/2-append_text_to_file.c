#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* append_text_to_file -  Function that appends text at the end of a file
* @filename: name of the file
* @text_content: is a NULL terminated string to write to the file
*Return: 1 on success, -1 on failure
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int abrir, imprimir, i;

	if (filename == NULL)
	{
		return (-1);
	}
	abrir = open(filename, O_APPEND | O_WRONLY);

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
