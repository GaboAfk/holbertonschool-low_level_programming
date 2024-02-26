/*
 * File: 7-leet.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @s: string.
 * Return: @s encoded.
 */
char *leet(char *s)
{
	char c[] = { 'a', 'e', 'o', 't', 'l'};
	char n[] = {  '4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (s[i] == c[j] || s[i] == c[j] - 32)
				s[i] = n[j];
		}
	}

	return (s);
}
