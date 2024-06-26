/*
 * File: 2-append_text_to_file.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: filename.
 * @text_content: is the NULL terminated string to add at the end of the file.
 * Return: 1 (Success). -1 (Fails).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
