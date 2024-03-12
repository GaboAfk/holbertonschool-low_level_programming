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
		printf("(nil)");
	else
		printf("%s", s);
}


typedef struct f
{
	char *f;
	void (*p)(va_list);
} form;

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the funtction.
 *				c:char, i:integer, f:float, s:char*, (nil) if s is NULL.
 */
void print_all(const char * const format, ...)
{
	va_list txt;
	const char *args;
	int i = 0, j = 0, num_args;

	form typef[] = {
		{"c", print_s},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(txt, format);

	args = format;

	while (*args)
	{
		while (typef[j].f != NULL)
		{
			if (*(typef[j].f) == args[i])
			{
				p = va_arg(txt, char*);
				prints = typef[j].p;
				
			}
			j++;
		}
		if (i < num_args - 1)
			printf(", ");

		i++;
	}

	printf("\n");
	va_end(txt);
}
