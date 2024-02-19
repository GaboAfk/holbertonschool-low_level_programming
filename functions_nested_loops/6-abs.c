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
		_putchar(n + '0');
	}
	else
		_putchar(n + '0');
	return (0);
}
