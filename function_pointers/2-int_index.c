/*
 * File: 2-int_index.c
 * Auth: Gabriel Morffe
 */

#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of numbers.
 * @size: size of array.
 * @cmp: pointer to the functions to compare values.
 * Return: index of the integer searched. -1 if dont matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		while (i < size && !cmp(array[i]))
			i++;
		if (cmp(array[i]))
			return (i);
		else
			return (-1);
	}
	else
		return (-1);
}
