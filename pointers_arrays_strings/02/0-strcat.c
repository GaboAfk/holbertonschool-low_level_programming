/*
 * File: 0-trcat.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: result string.
 * @src: string to appends.
 *
 * Return: @dest modify.
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
		*dest++ = *src++;
	*dest++ = '\0';

	return (result);
}
