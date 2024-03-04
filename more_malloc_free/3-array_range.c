/*
 * File: 3-array_range.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: min value.
 * @max: max value.
 * Return: pointer to array. NULL if fail or min > max.
 */
int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		a[i] = min + i;

	return (a);
}
