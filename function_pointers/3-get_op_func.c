/*
 * File: 3-get_op_func.c
 * Auth: Gabriel Morffe
 */

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - function that selects the correct function to perform the
 *					operation asked by the user.
 * @s: operator passed as argument to the program.
 * Return: pointer to the function that corresponds to the operator @s.
 *			NULL if dont match.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
