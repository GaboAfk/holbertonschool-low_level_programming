#include "main.h"

/**
 * _isupper - checks for uppercase character @c.
 * @c: character in fact.
 *
 * Return: 1 (Success) 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

