/*
 * File: 0-print_name.c
 * Auth: Gabriel Morffe
 */

#include <stdlib.h>

/**
 * print_name - function with a function pointer that prints a name.
 * @name: string (name) to print.
 * @f: function pointer to a char pointer function (printfs).
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
