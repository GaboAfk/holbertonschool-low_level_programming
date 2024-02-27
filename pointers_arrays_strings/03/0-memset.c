/*
 * File: 0-emset.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: string to modify.
 * @b: char to use in b.
 * @n: first n bytes to modify.
 *
 * Return: @s modified.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
