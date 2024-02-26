/*
 * File: 3-trcmp.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdio.h>

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
	int r = 0;

	while (*s1 != '\0' && *s2 != '\0' && !r)
	{
		r = *s1 - *s2;
		s1++;
		s2++;
	}

	if (r != 0)
		return (r);

	else if (*s1 != '\0')
		return (*s1 - '0');

	else if (*s2 != '\0')
		return (-(*s2 - '0'));
	else
		return (r);
}
