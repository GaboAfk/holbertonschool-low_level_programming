#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks @c for alphabetic character.
 * @c: character in fact.
 * Return: 0 or 1.
 */
int _isalpha(int c)
{
	if ((c > 97 && c < 123) || (c > 64 && c < 91))
		return (1);
	return (0);
}
