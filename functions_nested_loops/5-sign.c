#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sing of @n.
 * @c: number in fact.
 * Return: 0, 1 or -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else return (0);
}
