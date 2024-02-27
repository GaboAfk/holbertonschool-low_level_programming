/*
 * File: 5-trstr.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * *_strstr - finds the first occurrence of the substring
 *				needle in the string haystack.
 * @haystack: string.
 * @needle: frase to find in @haystack.
 *
 * Return: pointer to first occurrence.
 */
char *_strstr(char *haystack, char *needle)
{
	char *n = needle;

	while (*haystack)
	{
		while (*haystack != '\0' && *needle != '\0')
		{
			if (*haystack != *needle)
			{
				needle = n;
				break;
			}
			haystack++;
			needle++;
		}
		if (*haystack != '\0' && *needle == '\0')
			return (haystack);

	haystack++;
	}
	return (0);
}
