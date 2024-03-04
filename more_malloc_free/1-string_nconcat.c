/*
 * File: 1string_nconcat.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdlib.h>

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
	char *p = malloc(sizeof(s1) + n + 1);
	unsigned int i = 0, j;

	if (!p)
		return (NULL);

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}

	for (j = 0; j < n && s2[j] != '\0'; i++, j++)
		p[i] = s2[j];

	s2[j+1] = '\0';

	return (p);
}
