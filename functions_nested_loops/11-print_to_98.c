#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from @n to 98, followed by a new line.
 * @n: first number to star counting.
 *
 * Return: NULL
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int i;
		for (i = n; i < 98; i++)
			printf("%d, ",i);
	}
	else if (n > 98)
	{
		int i;
		for (i = n; i > 98; i--)
			printf("%d, ",i);
	}

	printf("98\n");
}
