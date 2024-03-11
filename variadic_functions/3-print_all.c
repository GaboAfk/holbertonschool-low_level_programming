/*
 * File: 3-print_all.c
 * Auth: Gabriel Morffe
 */

#include "variadic_functions.h"
#include <stdio.h>

typedef struct f
{
	char *f;
	char (*p)(const char * const a);
} form;

form typef[] = {
	{"c", print_strings},
	{"i", print_numbers},
	{"f", print_float},
	{"s", print_strings},
	{NULL, NULL}
};

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the funtction.
 *				c:char, i:integer, f:float, s:char*, (nil) if s is NULL.
 */
void print_all(const char * const format, ...)
{
	va_list txt;
	char *p, *args;
	int i = 0, j = 0, num_args;
	void (*prints)(const char *, const unsigned int, ...);

	va_start(txt, format);

	args = va_arg(txt, char *);
	num_args = strlen(args);

	while (args[i])
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
