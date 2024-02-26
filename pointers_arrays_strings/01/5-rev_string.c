/*
 * File: 5-rev_string.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: string.
 */
void rev_string(char *s)
{
	int i, j = 0;
	char r;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	j--;

	for (i = j; i > j / 2; i--)
	{
		r = s[i];
		s[i] = s[j - i];
		s[j - i] = r;
	}
}
