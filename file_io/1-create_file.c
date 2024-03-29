/*
 * File: 1-create_file.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <string.h>

/**
 * create_file - function that creates a file.
 * @filename: file name.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 (Success). -1 (Fails).
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	char *buf = text_content;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!buf)
		buf = "";

	w =	write(fd, buf, strlen(buf));
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
