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
{{
	char *res;
	int i, size1 = 0, size2 = 0;
	int e1 = 0, e2 = 0;

	if (s1)
	{
		e1 = 1;
		for (i = 0; s1[i] != '\0'; i++)
		{
			size1++;
		}
	}

	if (s2)
	{
		e2 = 1;
		for (i = 0; s2[i] != '\0'; i++)
		{
			size2++;
		}
	}

	if (e1 && e2)
		res = malloc((size1 + size2 + 1) * sizeof(char));
	else
		res = malloc((e1 * (size1 + 1) + e2 * (size2 + 1)) * sizeof(char));

	if (res != NULL)
	{
		if (e1 && e2)
		{
			for (i = 0; i < size1; i++)
			{
				res[i] = s1[i];
			}
			for (; i < size1 + size2; i++)
			{
				res[i] = s2[i - size1];
			}
			res[i] = '\0';
		}
		else if (e1)
		{
			for (i = 0; i < size1; i++)
			{
				res[i] = s1[i];
			}
			res[i] = '\0';
		}
		else
		{
			for (i = 0; i < size2; i++)
			{
				res[i] = s2[i];
			}
			res[i] = '\0';
		}
	}
	else
		return (NULL);
	return (res);
}}
