#include <stdio.h>
#include "main.h"

/**
 * _abs - print the absolute value of @n.
 * @n: number in fact.
 *
 * Return: 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('0' + n);
	}
	else
		_putchar('0' + n);
	return (0);
}
