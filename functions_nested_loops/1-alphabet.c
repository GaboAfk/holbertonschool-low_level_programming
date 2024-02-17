#include <stdio.h>
#include "main.h"

/**
 * main - primts the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for(i = 97; i < 123; i++)
		_putchar(i);
		
	_putchar('\n');
	return (0);
}
