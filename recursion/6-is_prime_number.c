/*
 * File: 6-is_prime_number.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * prime_aux - find numbers of @n are divisible by @d.
 * @n: number.
 * @d: dividend.
 * Return: 1 if @n is prime. 0 if not.
 */
int prime_aux(int n, int d)
{
	if (n == d)
		return (1);
	else if (n % d == 0)
		return (0);
	return (prime_aux(n, d + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a
 *						prime number, otherwise return 0.
 * @n: number.
 * Return: 1 if @n is prime. 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_aux(n, 2));
}
