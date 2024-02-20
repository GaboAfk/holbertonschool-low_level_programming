#include "main.h"

/**
 * print_line - draws a straight line depending of @n.
 * @n: number of lines to draw.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
