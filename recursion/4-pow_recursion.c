/*
 * File: 4-pow_recursion.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: num base.
 * @y: exp.
 * Return: value of @x raised @y. -1 if y < 0.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	else if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
