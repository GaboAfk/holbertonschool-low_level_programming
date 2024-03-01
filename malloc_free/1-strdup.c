/*
 * File: 1-strdup.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - using malloc for allocated space, which contains a copy of
 *				the string given as a parameter.
 * @str: string to duplicate.
 * Return: pointer to a copy of @str. NULL if str = NULL or insufficient
 *				memor was available.
 */
char *_strdup(char *str)
{
	char *a;
	int i, size = 0;

	if (!str)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}

	a = malloc((size + 1) * sizeof(*str));
		
	if (a != NULL)
	{
		for (i = 0; i < size; i++)
		{
			a[i] = str[i];
		}
	}
	else 
		return (NULL);
	return (a);
}
