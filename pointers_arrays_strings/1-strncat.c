/*
 * File: 1-trncat.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: result string.
 * @src: string to appends.
 * @n: number of chars in srt to copy.
 *
 * Return: @dest modify.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n-- > 0)
		*dest++ = *src++;

	*dest++ = '\0';

	return (result);
}
