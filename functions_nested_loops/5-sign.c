#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sing with _putchar of @n.
 * @n: number in fact.
 *
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
	else
	{
		_putchar('0');
		return (0);
	}
}
