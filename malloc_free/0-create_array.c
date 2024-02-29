/*
 * File: 0-create_array.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and
 *					initializes it with a specific char.
 * @size: array long.
 * @c: char to put.
 * Return: pointer to array of chars.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (0);

	a = malloc(size);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
