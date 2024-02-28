/*
 * File: 2-argc.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments passed into.
 * @argc: number of arguments when compile.
 * @argv: array of strings passed when compile.
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
	printf("%s\n", *argv++);
	return (0);
}
