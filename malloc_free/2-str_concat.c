/*
 * File: 2str_concat.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer to a newly allocated space in memory with s1 followed by s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int i, j, size1 = 0, size2 = 0;

	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
			size1++;
	}
	if (s2)
	{
		for (i = 0; s2[i] != '\0'; i++)
			size2++;
	}

	res = malloc((size1 + size2 + 1) * sizeof(char));

	if (res != NULL)
	{
		for (i = 0; i < size1; i++)
			res[i] = s1[i];
		for (j = 0; j < size2; i++, j++)
			res[i] = s2[j];
		res[size1 + size2] = '\0';
	}
	else
		return (NULL);
	return (res);
}
