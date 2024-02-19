#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * Return: 0 or 1.
 */
int _islower(int c)
{
	if (97 < c && c > 122)
		return (1);
	else return (0);
}
