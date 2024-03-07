/*
 * File: 3-main.c
 * Auth: Gabriel Morffe
 */

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers input with the operation asked
 * @argc: number of parameters.
 * @argv: array pointer to parameters.
 * Return: 0 (Success). 98 if number of arguments is wrong.
 *			99 if the operator is wrong. 100 if (/ or %) by 0.
 */
int main(int argc, char **argv)
{
	char *a, *b, *s;
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = argv[1];
	s = argv[2];
	b = argv[3];

	if (*s != '+' && *s != '-' && *s != '*' && *s != '/' && *s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*s == '/' || *s == '%') && (atoi(b) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(s)(atoi(a), atoi(b));
	printf("%d\n", res);

	return (0);
}
