/*
 * File: 9-strcpy.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * *_strcpy - copy string from @src to @des.
 * @dest: array.
 * @src: string to copy.
 * Return: string @src in @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
