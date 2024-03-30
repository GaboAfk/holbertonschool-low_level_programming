/*
 * File: 3-cp.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdio.h>

/**
 * main - program that copies the content of a file to another file.
 * @ac: number of arguments.
 * @av: arguments.
 * Return: Always 0 (Success). 97 (incorrect @ac).
 */
int main(int ac, char **av)
{
	int file_to, file_from, bytes_read;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	file_from = open(av[1], O_RDONLY);

	if (file_from == -1)
		dprintf(1, "Error: Can't read from file %s\n", av[1]), exit(98);

	bytes_read = read(file_from, buffer, 1024);
	if (bytes_read == -1 || file_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

	while (bytes_read > 0 && file_from > 0)
	{
		if (file_to == -1 || write(file_to, buffer, bytes_read) < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		bytes_read = read(file_from, buffer, 1024);
	}

	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
