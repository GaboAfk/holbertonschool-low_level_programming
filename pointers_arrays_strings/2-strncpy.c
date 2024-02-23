/*
 * File: 2-trncpy.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * *_strncpy - concatenates two strings.
 * @dest: result string.
 * @src: string to appends.
 * @n: number of chars in srt to copy.
 *
 * Return: @dest modify.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n-- > 0)
		*dest++ = *src++;

	while (n-- > 0)
		*dest++ = '\0';

	return (result);
}
