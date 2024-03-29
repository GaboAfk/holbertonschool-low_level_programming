/*
 * File: 2-strlen_recursion.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * Return: length of string.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
