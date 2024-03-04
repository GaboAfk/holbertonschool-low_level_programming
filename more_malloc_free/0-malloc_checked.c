/*
 * File: 0-malloc_checked.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc.
 * @b: wanted size.
 * Return: pointer to malloc. 98 (Fail).
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (!p)
		exit(98);
	else
		return (p);
}
