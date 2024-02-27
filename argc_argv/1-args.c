/*
 * File: 1-argc.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of argunments passed into.
 * @argc: number of arguments when compile.
 * @argv: array of strings passed when compile.
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc > 0 && *argv)
	printf("%d\n", argc - 1);
	return (0);
}
