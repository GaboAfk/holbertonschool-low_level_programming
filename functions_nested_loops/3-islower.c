#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: character in fact.
 * Return: 0 or 1.
 */
int _islower(int c)
{
	if (c > 97 && c < 123)
		return (1);
	return (0);
}
