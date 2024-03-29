/*
 * File: 0-puts_recursion.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
