/*
 * File: 0-whatsmyname.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdio.h>

/**
 * main - prints the name program, followed by a new line
 * @argc: number of arguments when compile.
 * @argv: array of strings passed when compile.
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc > 0)
	printf("%s\n", argv[0]);
	return (0);
}
