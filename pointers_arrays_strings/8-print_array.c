/*
 * File: 8-print_array.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 *			followed by a new line.
 * @a: array.
 * @n: elements to print.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n && a[i] != '\0'; i++)
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	printf("\n");
}
