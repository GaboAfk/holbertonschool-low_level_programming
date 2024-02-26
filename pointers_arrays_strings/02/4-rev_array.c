/*
 * File: 4-rev_array.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array.
 * @n: number of elemets to swap
 */
void reverse_array(int *a, int n)
{
	int large = 0, i, aux;

	for (i = 0; i < n; i++)
		large++;
	large--;
	for (i = large; i > large / 2; i--)
	{
		aux = a[i];
		a[i] = a[large - i];
		a[large - i] = aux;
	}
}
