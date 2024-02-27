/*
 * File: 5-sqrt_recursion.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * sqrt_aux - evalue possibles roots from 1 to n.
 * @n: number.
 * @r: possible root.
 * Return: natural square root of @n. -1 if dont exist.
 */
int sqrt_aux(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);

	return (sqrt_aux(n, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number.
 * Return: natural square root of @n. -1 if dont exist.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_aux(n, 1));
}
