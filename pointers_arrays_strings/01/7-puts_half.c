/*
 * File: 7-puts_half.c
 * Auth: Gabriel Morffe
 */

#include "main.h"

/**
 * puts_half - prints second half of a string.
 * @str: string.
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; i++)
		j++;

	if (j % 2 == 1)
		j++;

	for (i = j / 2; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
