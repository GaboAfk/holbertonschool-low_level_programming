/*
 * File: 1-swap.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * swap_int - swaps the values
 * @a: first number.
 * @b: second number.
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
