/*
 * File: 100-atoi.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * _atoi - string to an integer.
 * @s: string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int n = 0, r = 0, i = 0;

	if (*s == '\0')
		return (0);

	while (*s != '\0')
	{

		if (*s == '-')
		{
			if (n == 0)
				n = 1;
			else
				n = 0;
		}

		if (*s >= '0' && *s <= '9')
		{
			if (!i)
				i = 1;
			r = r * 10 + *s - '0';
		}
		else if (i)
			break;

		s++;
	}

	if (n)
		r = -r;
	return (r);
}
