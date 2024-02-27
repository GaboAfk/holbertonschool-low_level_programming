/*
 * File: 1-emcpy.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: memory copied.
 * @src: memory to copy.
 * @n: number of bytes to copy.
 *
 * Return: @dest charged.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
