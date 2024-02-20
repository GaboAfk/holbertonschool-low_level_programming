#include "main.h"

/**
 * print_triangle - prints a triangle of @size followed by a new line.
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{	
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < j; k++)
				_putchar('#');
			_putchar(' ');
		}
	_putchar('\n');
	}
	
	if (size <= 0)
		_putchar('\n');
}
