#include "main.h"

/**
 * _isdigit - checks if @c is a digit (0 through 9).
 * @c: character in fact.
 *
 * Return: 1 (Success) 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

