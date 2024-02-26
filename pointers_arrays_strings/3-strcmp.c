/*
 * File: 3-trcmp.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * _strcmp - compares two strings, 0 if are equal,
 *				- if @s1<@s2 and if otherwise.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 0, -1, 1.
 */
int _strcmp(char *s1, char *s2)
{
	char i = 0, j = 0;

	while (*s1++ != '\0')
		i += *s1;

	while (*s2++ != '\0')
		j += *s2;

	return ((i - '0') - (j - '0'));
}
