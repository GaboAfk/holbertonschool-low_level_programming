/*
 * File: 1-array_iterator.c
 * Auth: Gabriel Morffe
 */

#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter on
 *						each element of an array.
 * @array: array of numbers.
 * @size: array's size.
 * @action: function pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
