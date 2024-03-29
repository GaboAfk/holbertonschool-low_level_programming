/*
 * File: 0-read_textfile.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdio.h>

/**
 * read_textfile - function that reads a text file and
 *					prints it to the POSIX standard output.
 * @filename: file name.
 * @letters: number of letters it should to read and print.
 * Return: The actual number of letters readed and printed.
 *			0 if fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd2, res;
	char *buf;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd2 = read(fd, buf, letters);
	if (fd2 == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	res = write(STDOUT_FILENO, buf, fd2);
	if (res == -1)
		return (0);

	free(buf);
	close(fd);

	return (fd2);
}
