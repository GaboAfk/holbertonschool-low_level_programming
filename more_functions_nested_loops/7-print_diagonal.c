#include "main.h"

/**
 * print_diagonal - draws a diagonal line depending of @n.
 * @n: number of lines to draw.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
