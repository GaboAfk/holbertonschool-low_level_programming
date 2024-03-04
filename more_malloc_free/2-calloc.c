/*
 * File: 2-calloc.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: elements.
 * @size: size of array.
 * Return: pointer to array. NULL if fail.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (!nmemb || !size)
		return (NULL);

	a = malloc(nmemb * size);

	for (i = 0; i < nmemb; i++)
		a[i] = 0;

	return (a);
}
