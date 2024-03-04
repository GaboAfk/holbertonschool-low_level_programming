/*
 * File: 1string_nconcat.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - allocates memory using malloc.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes to copy.
 * Return: pointer to a new allocated with @s1 followed
 *			by n bytes of @s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j;

	if (s1)
		while (s1[i] != '\0')
			i++;

	p = malloc(sizeof(char) * (i + n + 1));
	if (!p)
		return (NULL);

	if (s1)
		for (i = 0; s1[i] != '\0'; i++)
			p[i] = s1[i];

	if (s2)
		for (j = 0; j < n && s2[j] != '\0'; i++, j++)
		{
			p[i] = s2[j];
		}

	p[i] = '\0';

	return (p);
}
