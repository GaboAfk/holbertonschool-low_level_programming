#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print the last digit of @n.
 * @n: number in fact.
 *
 * Return: e.
 */
int print_last_digit(int n)
{
	int e = n % 10;

	if (e < 0)
		e = -e;

	_putchar(e + '0');

	return (e);
}
