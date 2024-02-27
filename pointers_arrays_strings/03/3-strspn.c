/*
 * File: 3-trspn.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: chars permited.
 *
 * Return: size of first segment found.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				p = 1;
				break;
			}
		if (p)
		{
			p = 0;
			continue;
		}
		else
			break;
	}
	return (i);
}
