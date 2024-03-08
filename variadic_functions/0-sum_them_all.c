/*
 * File: 0-sum_them_all.c
 * Auth: Gabriel Morffe
 */

#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters.
 * Return: sum of all its parameters. 0 if n = 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int res = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		res += va_arg(args, int);

	va_end(args);

	return (res);
}
