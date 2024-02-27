/*
 * File: 8-print_diagsums.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *						of a square matrix of integers.
 * @a: pointer to square matrix.
 * @size: size of @a.
 */
void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i * size + i];
		d2 += a[i * size + (size - 1 * i)];
	}
	printf("%d, %d\n", d1, d2);
}
