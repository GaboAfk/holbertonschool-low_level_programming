/*
 * File: 2-print_strings.c
 * Auth: Gabriel Morffe
 */

#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string between numbers.
 * @n: integers passed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	unsigned int i;

	va_start(words, n);

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%s", va_arg(words, char*));
			if (separator)
				printf("%s", separator);
		}

		printf("%s", va_arg(words, char*));
	}
		printf("\n");
}
