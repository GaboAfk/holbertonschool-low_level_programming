/*
 * File: 1-print_numbers.c
 * Auth: Gabriel Morffe
 */

#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string between numbers.
 * @n: integers passed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d", va_arg(nums, int));
			if (separator)
				printf("%s", separator);
		}

		printf("%d", va_arg(nums, int));
	}

	printf("\n");
	va_end(nums);
}
