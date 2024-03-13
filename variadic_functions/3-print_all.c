/*
 * File: 3-print_all.c
 * Auth: Gabriel Morffe
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_c - function that prints chars.
 * @txt: list of types of arguments passed to the funtction.
 */
void print_c(va_list txt)
{
	printf("%c", va_arg(txt, int));
}

/**
 * print_i - function that prints integers.
 * @txt: list of types of arguments passed to the funtction.
 */
void print_i(va_list txt)
{
	printf("%d", va_arg(txt, int));
}

/**
 * print_f - function that prints floats.
 * @txt: list of types of arguments passed to the funtction.
 */
void print_f(va_list txt)
{
	printf("%f", va_arg(txt, double));
}

/**
 * print_s - function that prints strings. (nil) if NULL.
 * @txt: list of types of arguments passed to the funtction.
 */
void print_s(va_list txt)
{
	char *s = va_arg(txt, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}


/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the funtction.
 *				c:char, i:integer, f:float, s:char*, (nil) if s is NULL.
 */
void print_all(const char * const format, ...)
{
	va_list txt;
	const char *args;
	int i = 0, j, flag = 0;

	form typef[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(txt, format);
	args = format;

	while (args && args[i] != '\0')
	{
		j = 0;
		while (typef[j].f)
		{
			if (*(typef[j].f) == args[i])
			{
				if (i > 0 && flag)
					printf(", ");

				typef[j].p(txt);

				if (!flag)
					flag = 1;
			}
			j++;
		}

		i++;
	}

	printf("\n");
	va_end(txt);
}
