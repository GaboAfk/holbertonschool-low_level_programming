/*
 * File: 2-strlen.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string.
 *
 * Return: len.
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}
